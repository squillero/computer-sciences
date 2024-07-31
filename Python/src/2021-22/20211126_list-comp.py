# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint


def main():
    foo = [(x, x**2) for x in range(10)]
    print(foo)
    table = [(r + 1) * (c + 1) for r in range(10) for c in range(10)]
    print(table)
    table = [[(r + 1) * (c + 1) for r in range(10)] for c in range(10)]
    pprint(table)


main()
