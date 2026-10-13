# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from math import sqrt

a = float(input('Value of "a": '))
b = float(input('Value of "b": '))
c = float(input('Value of "c": '))

# f-strings
print(f"Solving {a:g}x²{b:+g}x{c:+g} = 0")

if a != 0:
    delta = b**2 - 4 * a * c

    if delta >= 0:
        x1 = (-b + sqrt(delta)) / 2 / a
        x2 = (-b - sqrt(delta)) / 2 / a
        print(f"x1={x1:g} / x2={x2:g}")
    else:
        print("Yeuch, no real solutions")
        
else:
    # bx + c = 0
    if c == 0:
        print("D'ho")
    else:
        x = -c / b
        print(f"x={x:g}")
