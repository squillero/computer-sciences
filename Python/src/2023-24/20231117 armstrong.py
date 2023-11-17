# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

DATA_INPUT_FILE = "20231117 numbers.dat"
DATA_OUTPUT_FILE = "20231117 armstrong.dat"


def read_file(filename):
    try:
        with open(filename) as in_file:
            raw_text = in_file.read()
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(1)

    numbers = list()
    for n in raw_text.split():
        numbers.append(int(n))
    return numbers


def read_file_alt(filename):
    try:
        with open(filename) as in_file:
            raw = in_file.read().split()
    except OSError as problem:
        print(f"Yeuch: {problem}")
        raw = list()

    numbers = list()
    for n in raw:
        numbers.append(int(n))
    return numbers


def read_file_alt2(filename):
    numbers = list()
    try:
        with open(filename) as in_file:
            for w in in_file:
                numbers.append(int(w))
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(1)
    return numbers


def narcissistic_value(number):
    number_str = str(number)
    number_digits = len(number_str)
    value = 0
    for digit in number_str:
        value += int(digit) ** number_digits
    return value


def write_file(filename, data):
    try:
        with open(filename, "w") as out_file:
            for n in data:
                out_file.write(f"{n}\n")
    except OSError as problem:
        exit(problem)


def main():
    numbers = read_file(DATA_INPUT_FILE)
    narcissistic_numbers = list()
    for n in numbers:
        if n == narcissistic_value(n):
            narcissistic_numbers.append(n)
    write_file(DATA_OUTPUT_FILE, narcissistic_numbers)


if __name__ == "__main__":
    main()
