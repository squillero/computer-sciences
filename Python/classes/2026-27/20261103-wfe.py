# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

from random import randint

# BASIC RULES FOR EXCEPTIONS
# 1- Keep it small
# 2- Be specific


def dangerous(num):
    try:
        print(1 / num)
    except ZeroDivisionError:
        print("D'ho!?")


def main():
    for _ in range(100):
        dangerous(randint(-10, 10))


main()
