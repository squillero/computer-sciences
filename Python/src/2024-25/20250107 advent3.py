# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

INPUT_FILE = '20250107 input.txt'


def read_dump(filename):
    r"""Read memory dump from file"""
    dump = list()
    try:
        with open(filename) as file:
            dump = file.readlines()
    except OSError as problem:
        exit(problem)
    return dump


def read_dump2(filename):
    r"""Read memory dump from file (single line)"""
    dump = ''
    try:
        with open(filename) as file:
            for line in file:
                dump += line[:-1]
    except OSError as problem:
        exit(problem)
    return dump


def extract_mul(line):
    r"""Try to parse mul(n1,n2) in the beginning of the line
    and returns (n1, n2) or (0, 0) if failed
    """
    if not line.startswith('mul('):
        return 0, 0
    line = line.removeprefix('mul(')  # 683,461) >,~select()wha
    try:
        number1, line = line.split(',', maxsplit=1)
        number1 = int(number1)  # 461) >,~select()wha
        number2, line = line.split(')', maxsplit=1)
        number2 = int(number2)  # >,~select()wha
    except ValueError:
        return 0, 0
    if not 0 <= number1 <= 999 or not 0 <= number2 <= 999:
        return 0, 0
    return number1, number2


def main():
    total = 0
    for line in read_dump(INPUT_FILE):
        for start in range(len(line)):
            n1, n2 = extract_mul(line[start:])
            total += n1 * n2
    print(f"{total=}")


if __name__ == '__main__':
    main()
