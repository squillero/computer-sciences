# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from copy import copy, deepcopy
from pprint import pprint

ROWS = 3
COLUMNS = 3


def fill(foo):
    for r in range(ROWS):
        for c in range(COLUMNS):
            foo[r][c] = (r + 1) * (c + 1)


def not_fill(foo):
    local_copy = deepcopy(foo)
    for r in range(ROWS):
        for c in range(COLUMNS):
            local_copy[r][c] = 1 / (1 + r + c)


def main():
    table = list()
    for r in range(ROWS):
        table.append([0] * COLUMNS)

    fill(table)
    pprint(table)
    not_fill(table)
    pprint(table)


if __name__ == "__main__":
    main()
