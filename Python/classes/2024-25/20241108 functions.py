# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def foo(bar):
    bar.extend([18, 5])


def gargle(bar):
    bar = [18, 5]


x = [23, 10]
foo(x)
gargle(x)
print(x)
