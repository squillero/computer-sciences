# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2025 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

FILENAME_MAP1 = 'map1.dat'
FILENAME_MAP2 = 'map2.dat'


def read_map(filename):
    hashes = set()
    try:
        with open(filename) as file:
            for row, line in enumerate(file):
                for col, symbol in enumerate(line.strip()):
                    if symbol == '#':
                        hashes.add((row, col))
    except OSError as problem:
        print(f"Yeuch: {problem}")
        return set()
    return hashes


def print_setmap(setmap):
    for r in range(10):
        for c in range(10):
            if (r, c) in setmap:
                print('#', end='')
            else:
                print('.', end='')
        print()


def main():
    map1 = read_map(FILENAME_MAP1)
    map2 = read_map(FILENAME_MAP2)
    print(f"Common #: {len(map1 & map2)}")
    print_setmap(map1 & map2)


if __name__ == '__main__':
    main()
