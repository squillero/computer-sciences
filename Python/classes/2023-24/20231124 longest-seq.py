# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from random import randint

NUMBER_MIN = 0
NUMBER_MAX = 5
SEQUENCE_LENGTH = 40


def create_random_seq(min_, max_, len_):
    """Returns a random sequence of `len_` integers in [`min_`, `max_`)"""
    seq = list()
    for s in range(len_):
        seq.append(randint(min_, max_ - 1))
    return tuple(seq)


def sequence_length(sequence, start):
    """Returns the lenght of the sequence of identical elements starting at `start`"""
    length = 0
    while (
        start + length < len(sequence)
        and sequence[start + length] == sequence[start]
    ):
        length += 1
    return length


def find_max_seq(sequence):
    """Returns length and starting point(s) of all longest sequences"""
    max_ = 0
    brackets = set()
    for i in range(len(sequence)):
        if sequence_length(sequence, i) > max_:
            max_ = sequence_length(sequence, i)
            brackets = {i}
        elif sequence_length(sequence, i) == max_:
            brackets.add(i)
    return max_, brackets


def main():
    sequence = create_random_seq(
        NUMBER_MIN, NUMBER_MAX, SEQUENCE_LENGTH
    )
    max_length, brackets = find_max_seq(sequence)

    for index, elem in enumerate(sequence):
        if index in brackets:
            print("{", end=" ")
        print(elem, end=" ")
        if index - max_length + 1 in brackets:
            print("}", end=" ")
    print()


if __name__ == "__main__":
    main()
