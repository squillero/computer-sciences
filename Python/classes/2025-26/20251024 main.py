# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import math

DAYS_IN_A_WEEK = 7


def sarp(work):
    for d in range(DAYS_IN_A_WEEK):
        print(f"Sarp is {work} on day {d+1}")


def main():
    sarp("studying")


main()
