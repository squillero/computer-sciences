# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def foo(x):
    x += [1, 2, 3]


def bar(x):
    x = x + [1, 2, 3]


def main():
    x = [23, 10]
    foo(x)
    print(x)
    bar(x)
    print(x)
