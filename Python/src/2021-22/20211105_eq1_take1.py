# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

a = int(input("a: "))
b = int(input("a: "))


def solve(a, b):
    x = -b / a
    return x


foo = solve(b, a)
print(f"x is {foo}")
