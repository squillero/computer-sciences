# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import warnings
from pprint import pprint


def make_table(rows, columns):
    warnings.warn('Yeuch, "tables" do not exist in Python!')
    table = list()
    for row in range(rows):
        table.append([None] * columns)
    return table


def main():
    table = make_table(10, 5)
    pprint(table)


if __name__ == "__main__":
    main()
