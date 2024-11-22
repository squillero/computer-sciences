# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from itertools import product
from icecream import ic

DIM = 10


def main():
    table = list()
    # error = [0] * DIM most common error
    for r in range(DIM):
        table.append([0] * DIM)
    for x in range(DIM):
        for y in range(DIM):
            table[x][y] = (x + 1) * (y + 1)
    table[5].extend([-1, -2, -3])
    print_table(table)


def real_main():
    table = list()
    for r in range(DIM):
        table.append([0] * DIM)
    for x, y in product(range(1, DIM + 1), repeat=2):
        table[x - 1][y - 1] = x * y
    table[5].extend([-1, -2, -3])
    print_table(table)


def print_table(table):
    for row in table:
        for element in row:
            print(f"{element:6d} ", end='')
        print()


if __name__ == '__main__':
    main()
