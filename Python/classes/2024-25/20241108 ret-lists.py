# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def make_list(a, b, c, d):
    return [a, b, c, d]


def make_tuple(a, b, c, d):
    # implicit
    return a, b, c, d


value = make_list(23, 10, 18, 5)
print(value)
