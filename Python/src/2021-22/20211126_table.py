# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

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
