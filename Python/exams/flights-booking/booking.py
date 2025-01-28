# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


FLIGHTS_INFO = 'flights.txt'
BOOKINGS_INFO = 'bookings.txt'
ROWS = 0
SEATS = 1
PASSENGERS = 2


def read_flights(filename):
    r"""Reads flight info from file and returns two dicts"""

    # yeuch, a named_tuple would have been the right choice,
    # but they are not allowed in this course :-(
    info = dict()
    passengers = dict()
    try:
        with open(filename) as file:
            for line in file:
                fligh, _, rows, seats = line.split()
                info[fligh] = (int(rows), int(seats))
                passengers[fligh] = list()
    except OSError as problem:
        print("Yeuch: {problem}")
        return dict()
    return info, passengers


def read_bookings(filename):
    r"""Read and pre-process bookings as a uniform list of tuples"""
    bookings = list()
    try:
        with open(filename) as file:
            for line in file:
                if line.startswith('BOOK'):
                    code, flight, name, surname, seats = line.split()
                    seats = int(seats)
                else:
                    code, flight, name, surname = line.split()
                    # useless, but it eases using the list in a for loop
                    seats = -1
                bookings.append((code, flight, f"{name} {surname}", seats))
    except OSError as problem:
        print(f"Yeuch: {problem}")
        return list()
    return bookings


def main():
    info, passengers = read_flights(FLIGHTS_INFO)

    # Note: passengers must be seated in the front rows, but no specific
    # mechanism for repacking after a cancellation is defined.
    # In the example, the last passenger is moved in the first front seat
    # available, then the process is repeated over and over...
    # Here, I'm using a "stable" algorithm: all passengers are shifted toward
    # the front, while maintaining their relative order.
    # A Counter() with random shuffling would be the most efficient choice
    for code, flight, name, seats in read_bookings(BOOKINGS_INFO):
        if code == 'BOOK' and len(passengers[flight]) + seats > info[flight][0] * info[flight][1]:
            print(f"BOOK {flight} {name} {seats} - Fail")
        elif code == 'BOOK':
            passengers[flight].extend([name] * seats)
        elif code == 'CANCEL':
            while name in passengers[flight]:
                passengers[flight].remove(name)
        else:
            assert "PANIK!"

    for flight in passengers:
        print(f"Fligh {flight}")
        r, s = 0, 0
        while passengers[flight]:
            print(f"{r+1} {s+1} {passengers[flight].pop(0)}")
            s += 1
            r += s // info[flight][1]
            s %= info[flight][1]


if __name__ == '__main__':
    main()
