# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint
from itertools import permutations

SQUARE_SIZE = 4


def read_user():
    """Reads a square from user."""
    square = list()
    for i in range(SQUARE_SIZE):
        square.append([None] * SQUARE_SIZE)
    for i in range(SQUARE_SIZE * SQUARE_SIZE):
        val = int(input())
        square[i // SQUARE_SIZE][i % SQUARE_SIZE] = val
    return square


def read_list(data):
    """Reads a square from a list"""
    square = list()
    for i in range(SQUARE_SIZE):
        square.append([None] * SQUARE_SIZE)
    for i in range(SQUARE_SIZE * SQUARE_SIZE):
        square[i // SQUARE_SIZE][i % SQUARE_SIZE] = data[i]
    return square


def check_magic(square):
    """Checks if square is magic."""

    # Check number validity
    valid = set(range(1, SQUARE_SIZE * SQUARE_SIZE + 1))
    current = set()
    for row in range(SQUARE_SIZE):
        current |= set(square[row])
    if current != valid:
        return False

    # Check sums
    target_sum = sum(square[0])
    for row in range(SQUARE_SIZE):
        if sum(square[row]) != target_sum:
            return False
    for col in range(SQUARE_SIZE):
        value = 0
        for row in range(SQUARE_SIZE):
            value += square[row][col]
        if value != target_sum:
            return False
    value = 0
    for idx in range(SQUARE_SIZE):
        value += square[idx][idx]
    if value != target_sum:
        return False
    value = 0
    for idx in range(SQUARE_SIZE):
        value += square[idx][SQUARE_SIZE - idx - 1]
    if value != target_sum:
        return False

    return True


def main():
    for p in permutations(range(1, SQUARE_SIZE**2 + 1)):
        s = read_list(p)
        if check_magic(s):
            pprint(s)


if __name__ == "__main__":
    main()
