# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

from pprint import pprint

NUM_ROWS = 10
NUM_COLUMNS = 10


def main():
    table = list()
    for _ in range(NUM_ROWS):
        table.append([0] * NUM_COLUMNS)
    for c in range(NUM_COLUMNS):
        table[0][c] = -1
        table[NUM_ROWS - 1][c] = -1
    for r in range(NUM_ROWS):
        table[r][0] = -1
        table[r][NUM_COLUMNS - 1] = -1

    step = 1
    r, c = 1, 1
    # E
    while table[r][c] == 0:
        table[r][c] = step
        c += 1
        step += 1
    c -= 1
    r += 1
    # S
    while table[r][c] == 0:
        table[r][c] = step
        r += 1
        step += 1
    r -= 1
    c -= 1
    # W
    while table[r][c] == 0:
        table[r][c] = step
        c -= 1
        step += 1
    r -= 1
    c += 1
    # W
    while table[r][c] == 0:
        table[r][c] = step
        r -= 1
        step += 1

    pprint(table)


if __name__ == '__main__':
    main()
