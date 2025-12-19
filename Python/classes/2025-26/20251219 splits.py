# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

# MAP_FILENAME = 'lab-small.txt'
MAP_FILENAME = 'lab-large.txt'

MAP_EMPTY = '.'
MAP_BEAM = '|'
MAP_SPLITTER = '^'
MAP_START = 'S'


def read_map(filename):
    """Read the map and store it in a list of lists"""

    map = list()
    try:
        with open(filename) as file:
            for line in file:
                map.append(list(line.rstrip()))
    except OSError as problem:
        print(f"Yeuch: {problem}")
        return list()
    return map


def print_map(map):
    """Pretty print a map"""
    for line in map:
        print(''.join(line))


def count_splits(map):
    """Count beam's splits"""

    num_columns = len(map[0])
    num_splits = 0

    for row in range(1, len(map)):
        for column in range(num_columns):
            if map[row][column] == MAP_EMPTY and map[row - 1][column] == MAP_START:
                map[row][column] = MAP_BEAM
            elif map[row][column] == MAP_EMPTY and map[row - 1][column] == MAP_BEAM:
                map[row][column] = MAP_BEAM
            elif map[row][column] == MAP_SPLITTER and map[row - 1][column] == MAP_BEAM:
                num_splits += 1
                map[row][column - 1] = MAP_BEAM
                map[row][column + 1] = MAP_BEAM
    # print_map(map)
    return num_splits


def main():
    map = read_map(MAP_FILENAME)
    # print_map(map)
    splits = count_splits(map)
    print(f"Found {splits} splits in map.")


if __name__ == '__main__':
    main()
