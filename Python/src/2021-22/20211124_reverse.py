# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def read_floats():
    """Reads floats while user enter a newline"""
    values = list()
    string = "!"
    while string:
        string = input()
        if string:
            values.append(float(string))
    return values


def multiply(values):
    """Multiplies list_ element by 10 and cheange list_"""
    for i, v in enumerate(values):
        values[i] = v * 10


def print_reversed(list_):
    """Prints the list_ starting from the end"""
    for v in reversed(list_):
        print(v, end='\t')
    print()


def main():
    values = read_floats()
    multiply(values)
    print_reversed(values)
    print(f"DEBUG: {values}")


main()
