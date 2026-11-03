# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.


def main():
    first()
    second()


def first():
    """Say sorry."""
    for num in range(-10, 10):
        try:
            fraction = 1 / num
        except:
            fraction = None
        print(f"1/{num} = {fraction}")


def second():
    """Ask permission."""
    for num in range(-10, 10):
        if num != 0:
            fraction = 1 / num
        else:
            fraction = None
        print(f"1/{num} = {fraction}")


main()
