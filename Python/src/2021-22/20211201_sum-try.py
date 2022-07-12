# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

from sys import exit
from pprint import pprint

FILENAME_IN = '20211201_inputXX.txt'
FILENAME_OUT = '20211201_output.txt'


def read_file(file_name):
    values = list()
    try:
        with open(file_name) as input:
            for line in input:
                values.append(float(line))
    except OSError as problem:
        print(f"Yeuch: \"{problem}\"")
        exit(1)
    except ValueError as problem:
        print(f"ValueError: \"{problem}\" -- terminating input")
    return values


def write_file(file_name, values):
    total = sum(values)
    average = total / len(values)
    with open(file_name, 'w') as output:
        for v in values:
            output.write(f"{v:.2f}\n")
        output.write("----------\n")
        output.write(f"Total: {total:.2f}\n")
        output.write(f"Average: {average:.2f}\n")


def main():
    values = read_file(FILENAME_IN)
    pprint(values)
    write_file(FILENAME_OUT, values)


main()
