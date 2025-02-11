# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# L(E)GB

from math import sqrt
from cmath import sqrt as c_sqrt


THIS_IS_NOT_REALLY_A_CONSTANT = 42


def foo(var):
    math.sqrt(THIS_IS_NOT_REALLY_A_CONSTANT)
    print(f"Hello foo, {var} is a local variable")


def bar(var):
    print(f"Hello bar, {var} is a local variable")
    print(f"Hello bar, {enes} is a local variable")
    enes = 98


def main():
    enes = 10
    print(enes)
    foo(42)
    print(enes)
    bar(42)
    print(enes)


if __name__ == '__main__':
    main()
