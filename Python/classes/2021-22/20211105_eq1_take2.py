# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

THE_ANSWER = 42


def solve(a, b):
    print(THE_ANSWER)
    x = -b / a
    return x


def main():
    a = int(input("a: "))
    b = int(input("b: "))

    foo = solve(a, b)
    print(f"x is {foo}")


main()
