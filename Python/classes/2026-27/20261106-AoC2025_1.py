# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

FILENAME = "20261106-AoC2025_1_input.dat"
# FILENAME = "20261106-AoC2025_1_test.dat"


def read_file(filename):
    numbers = list()
    try:
        with open(filename) as file:
            for line in file:
                if line[0] == "L":
                    numbers.append(int(line[1:]))
                elif line[0] == "R":
                    numbers.append(-int(line[1:]))
                else:
                    assert "Yeuch"
    except OSError as error:
        print(f"Error {error}")
        exit(1)
    return numbers


def part1(rotations):
    counter = 0
    position = 50
    for number in rotations:
        position += number
        if position % 100 == 0:
            counter += 1
    return counter


def part2(rotations):
    counter = 0
    position = 50
    for number in rotations:
        inc = number / abs(number)  # inc = 1 if number >= 0 else -1
        for _ in range(abs(number)):
            position += inc
            if position % 100 == 0:
                counter += 1
    return counter


def main():
    rots = read_file(FILENAME)
    print(f"Input: {len(rots):,} rotations")
    print(f"Part 1: {part1(rots)}")
    print(f"Part 2: {part2(rots)}")


main()
