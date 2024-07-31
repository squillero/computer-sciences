# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

a = int(input("a: "))
b = int(input("a: "))


def solve(a, b):
    x = -b / a
    return x


foo = solve(b, a)
print(f"x is {foo}")
