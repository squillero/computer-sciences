# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

# Solver for a x^2 + b x + c = 0

import math

a = float(input("a: "))
b = float(input("b: "))
c = float(input("c: "))

print(f"Solving the equation {a:g} x^2 + {b:g} x + {c:g} = 0")

if a == 0:
    if b == 0 and c == 0:
        print(f"D'ho")
    elif b == 0:
        print("Impossible")
    else:
        print(f"x = {-c/b:g}")
else:
    delta = b**2 - 4 * a * c
    if delta >= 0:
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)

        print(f"x1 = {x1:g}")
        print(f"x2 = {x2:g}")
    else:
        print("No real solutions")

print("Program completed. Goodbye.")
