# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

TABLE_SIZE = 10


def main():
    # create the "table"
    table = list()
    for i in range(TABLE_SIZE):
        table.append([None] * TABLE_SIZE)
    pprint(table)

    # fill in values
    for r in range(TABLE_SIZE):
        for c in range(TABLE_SIZE):
            table[r][c] = (r + 1) * (c + 1)
    pprint(table)


main()
