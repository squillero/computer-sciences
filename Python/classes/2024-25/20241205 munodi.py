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
                if sequence != munodi(sequence[0]):
                    print(f"Sequence {num+1} is NOT a Munodi sequence")
                else:
                    print(f"Sequence {num+1} is a Munodi sequence (length {len(sequence)})!")
    except OSError as problem:
        exit(problem)


def munodi(number):
    sequence = [number]
    while number > 1:
        if number % 2 == 0:
            number //= 2
        else:
            number = number * 3 + 1
        sequence.append(number)
    return sequence


def line_to_sequence(line):
    sequence = list()
    for token in line.split():
        sequence.append(int(token))
    return sequence


def main():
    check_sequences(INPUT_FILE)


if __name__ == '__main__':
    main()
