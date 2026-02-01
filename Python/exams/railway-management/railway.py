# Copyright © 2026 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

TRIPS_FILENAME = 'corse.txt'
OPERATIONS_FILENAME = 'operazioni.txt'


def read_trips(filename):
    """Read the trip database"""
    database = dict()
    try:
        with open(filename) as trips_file:
            for id in trips_file:
                tokens = id.split()
                trip_code = tokens.pop(0)
                database[trip_code] = list()
                for info in tokens:
                    train, hour, minute = info.split(':')
                    database[trip_code].append((train, (int(hour), int(minute))))
    except:
        print(f"Yeuch. Can't read \"{filename}\"")
        database = dict()
    return database


def read_operations(filename):
    """Read the operation, return a list of tuples"""
    operations = list()
    try:
        with open(filename) as operations_file:
            for id in operations_file:
                operations.append(tuple(id.split()))
    except:
        print(f"Yeuch. Can't read \"{filename}\"")
        operations = list()
    print(operations)
    return operations


def find_trips(database, station):
    """Find all trips stopping in a given station"""
    trips = dict()
    for id, stops in database.items():
        for s, time in stops:
            if s == station:
                trips[id] = time
    return trips


def print_stations(database):
    """Print sorted list of stations."""
    stations = set()
    for stops in database.values():
        for s, _ in stops:
            stations.add(s)  # Set, avoid duplicates
    print("Ordered list of stations served: ", ", ".join(sorted(stations)), ".", sep='')


def print_trips_from(database, station, time):
    """Print trips originating from `station` at `time`"""
    trips = find_trips(database, station)
    tmp = list()
    for id, departure in trips.items():
        final_destination = database[id][-1][0]
        if departure > time and final_destination != station:
            tmp.append(f"{id} {departure[0]:02d}:{departure[1]:02d} bound for {final_destination}")
    print(
        f"Timetable for {station} station from {time[0]:02d}:{time[1]:02d} onwards: ",
        "; ".join(tmp),
        ".",
        sep='',
    )


def print_shortest_jurney(database, departure, time, arrival):
    """Print shortest jurney from `departure` to `arrival` after `time`"""
    trips_from = find_trips(database, departure)
    trips_to = find_trips(database, arrival)
    tmp = list()
    for id in set(trips_from) & set(trips_to):  # trips that stops in both sattions
        if time <= trips_from[id] < trips_to[id]:  # in the correct order
            travel_time = 60 * (trips_to[id][0] - trips_from[id][0]) + (
                trips_to[id][1] - trips_from[id][1]
            )
            tmp.append((travel_time, id))  # first time, then trip_id
    tmp.sort()
    travel_time, id = tmp[0]
    print(
        f"Shortest journey from {departure} to {arrival} from {time[0]:02d}:{time[1]:02d} onwards "
        + f"Train: {id} Departure: {departure} {trips_from[id][0]:02d}:{trips_from[id][1]:02d}; "
        + f"Arrival: {arrival} {trips_to[id][0]:02d}:{trips_to[id][1]:02d}; "
        + f"Journey Duration: {travel_time//60}h {travel_time%60}min."
    )


def main():
    database = read_trips(TRIPS_FILENAME)
    for operation in read_operations(OPERATIONS_FILENAME):
        if operation[0] == 'Stazioni':
            print_stations(database)
        elif operation[0] == 'Orario':
            h, m = operation[2].split(':')
            print_trips_from(database, operation[1], (int(h), int(m)))
        elif operation[0] == 'Viaggio':
            h, m = operation[2].split(':')
            print_shortest_jurney(database, operation[1], (int(h), int(m)), operation[3])
        print()


if __name__ == '__main__':
    main()
