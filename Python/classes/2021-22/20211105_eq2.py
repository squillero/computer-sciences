# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from math import sqrt


def solve2(a, b, c):
    """Solve equation ax**2 + bx + c == 0"""
    delta = b**2 - 4 * a * c
    x1 = (-b + sqrt(delta)) / (2 * a)
    x2 = (-b - sqrt(delta)) / (2 * a)
    return x1, x2


def main():
    a = float(input("a: "))
    b = float(input("b: "))
    c = float(input("c: "))

    x1, x2 = solve2(a, b, c)
    print(f"x1={x1}; x2={x2}")


main()
