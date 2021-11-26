# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

from pprint import pprint


def main():
    foo = [(x, x**2) for x in range(10)]
    print(foo)
    table = [(r+1)*(c+1) for r in range(10) for c in range(10)]
    print(table)
    table = [[(r+1)*(c+1) for r in range(10)] for c in range(10)]
    pprint(table)

main()
