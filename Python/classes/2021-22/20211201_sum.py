# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

FILENAME_IN = '20211201_input.txt'
FILENAME_OUT = '20211201_output.txt'


def read_file(file_name):
    values = list()
    with open(file_name) as input:
        for line in input:
            values.append(float(line))
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
