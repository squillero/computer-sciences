# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# READ A, B
a = 49494949
b = 0

r = a % b

while r > 0:
    a = b
    b = r
    r = a % b

print(b)
