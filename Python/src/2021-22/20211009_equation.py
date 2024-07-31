# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from math import sqrt

# 3 x**2 - 9 x + 2

a = 3
b = -9
c = 2

delta = b**2 - 4 * a * c
x1 = (-b + sqrt(delta)) / (2 * a)
x2 = (-b - sqrt(delta)) / (2 * a)

print(f"x1={x1}; x2={x2}")
