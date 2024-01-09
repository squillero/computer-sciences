# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

SEATS_FILENAME = "20231222 the-theater.dat"

import csv
from pprint import pprint


def main():
    seats = read_seats_csv(SEATS_FILENAME)

    while True:
        user = input()
        if user[0] == "S":
            place_row, place_col = user[1:].strip().split()
            place_row, place_col = (
                int(place_row) - 1,
                int(place_col) - 1,
            )

        elif user[0] == "C":
            cost = int(user[1:])
            place_row, place_col = find_cost(seats, cost)

        if (
            place_row
            and place_col
            and seats[place_row][place_col] > 0
        ):
            seats[place_row][place_col] = 0
        else:
            print("Yeuch")

        pprint(seats)


def find_cost(seats, desired_cost):
    for ri, row in enumerate(seats):
        for ci, cost in enumerate(row):
            if cost == desired_cost:
                return ri, ci
    return None, None


def read_seats(filename):
    seats = list()
    try:
        with open(filename) as file_in:
            for line in file_in:
                tmp = list()
                for p in line.split(","):
                    tmp.append(int(p))
                seats.append(tmp)
    except OSError as problem:
        exit(problem)

    return seats


def read_seats_csv(filename):
    seats = list()
    try:
        with open(filename) as csvfile:
            for row in csv.reader(csvfile):
                seats.append([int(v) for v in row])
    except OSError as problem:
        exit(problem)
    return seats


if __name__ == "__main__":
    main()
