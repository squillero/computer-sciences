# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


from icecream import ic


def swap(a, b):
    return b, a


value = swap(23, 10)
ic(value)
ic(type(value))

foo = 23
bar = 10
bar, foo = swap(foo, bar)
