# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from math import sqrt, floor, ceil


def prime(number):
    if number % 2 == 0 and number != 2:
        return False
    for n in range(3, ceil(sqrt(number)) + 1, 2):
        if number % n == 0:
            return False
    return True


for n in range(10):
    print(f"{n} -> {prime(n)}")
