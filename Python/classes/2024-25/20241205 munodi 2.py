# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# <https://github.com/squillero/computer-sciences>
# Free under certain conditions — see the license for details

from icecream import ic

INPUT_FILE = '20241205 seq.dat'


def check_sequences(filename):
    try:
        with open(filename) as file:
            for num, line in enumerate(file):
                sequence = line_to_sequence(line)
                if is_munodi(sequence):
                    print(f"Sequence {num+1} is a Munodi sequence (length {len(sequence)})!")
                else:
                    print(f"Sequence {num+1} is NOT a Munodi sequence")
    except OSError as problem:
        exit(problem)


def is_munodi(sequence):
    for n1, n2 in zip(sequence, sequence[1:]):
        if next_munodi_number(n1) != n2:
            return False
    else:
        # this is the `else` of the `for` line 24, not the `if` line 25 !!!
        return sequence[-1] == 1


def next_munodi_number(number):
    if number % 2 == 0:
        return number // 2
    else:
        return number * 3 + 1


def line_to_sequence(line):
    sequence = list()
    for token in line.split():
        sequence.append(int(token))
    return sequence


def main():
    check_sequences(INPUT_FILE)


if __name__ == '__main__':
    main()
