# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.


def carla(foo):
    foo = foo + [41]


def david(foo):
    foo += [42]


data = [23, 10, 18, 5]

print(data)
carla(data)
print(data)
david(data)
print(data)
