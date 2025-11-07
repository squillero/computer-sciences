# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import math

I_DONT_CHANGE_IT_PROMISE = 99
MY_COOL_DATA_FILE = "bazinga.dat"


def calculate(variable):
    return 2 * variable + 1


def cowboy():
    math.pow(9, 2)
    print("Wohaaaa!")


def main():
    foo = cowboy()
    if foo is not None:
        print(f"Hey, function returns: {foo}")
    foo = calculate(21)
    if foo is not None:
        print(f"Hey, function returns: {foo}")


# BLACK MAGIC
if __name__ == "__main__":
    main()
