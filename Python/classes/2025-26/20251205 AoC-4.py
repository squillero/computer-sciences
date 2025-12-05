# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint
from copy import deepcopy

DATA_FILE = '20251205 AoC-4.data.txt'
DATA_FILE = '20251205 AoC-4.small.txt'
SYMBOL_ROLL = '@'
SYMBOL_EMPTY = '.'


def read_file(filename):
    data = list()
    try:
        with open(filename) as file:
            for line in file:
                data.append(list(line.rstrip()))
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(1)
    return data


def count_rolls(data, pos):
    len_row, len_col = len(data), len(data[0])
    count = 0
    for row in range(pos[0] - 1, pos[0] + 1 + 1):
        for col in range(pos[1] - 1, pos[1] + 1 + 1):
            if row >= 0 and row < len_row and col >= 0 and col < len_col and (row, col) != pos:
                if data[row][col] == SYMBOL_ROLL:
                    count += 1
    return count


def main():
    data = read_file(DATA_FILE)
    pprint(data)

    # part 1
    tot_rolls = 0
    for r in range(len(data)):
        for c in range(len(data[0])):
            if data[r][c] == SYMBOL_ROLL and count_rolls(data, (r, c)) < 4:
                tot_rolls += 1
    print(tot_rolls)

    # part 2
    tot_rolls = 0
    accessible_rolls = -1

    while accessible_rolls != 0:
        accessible_rolls = 0
        for r in range(len(data)):
            for c in range(len(data[0])):
                if data[r][c] == SYMBOL_ROLL and count_rolls(data, (r, c)) < 4:
                    accessible_rolls += 1
        tot_rolls += accessible_rolls
        tmp_data = deepcopy(data)
        for r in range(len(data)):
            for c in range(len(data[0])):
                if data[r][c] == SYMBOL_ROLL and count_rolls(data, (r, c)) < 4:
                    tmp_data[r][c] = SYMBOL_EMPTY
        data = tmp_data

    print(tot_rolls)


if __name__ == '__main__':
    main()
