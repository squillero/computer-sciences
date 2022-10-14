# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

import math
import cmath

a = float(input("a: "))
b = float(input("b: "))
c = float(input("c: "))

if a == 0:
    print(f"Let's solve {b} x + {c} = 0")
    print(f"x={-c/b}")
else:
    print(f"Let's solve {a} x^2 + {b} x + {c} = 0")
    delta = b**2 - 4 * a * c

    if delta >= 0:
        x1 = (-b + math.sqrt(delta)) / 2 / a
        x2 = (-b - math.sqrt(delta)) / 2 / a
        print(f"x1={x1}; x2={x2}")
    else:
        x1 = (-b + cmath.sqrt(delta)) / 2 / a
        x2 = (-b - cmath.sqrt(delta)) / 2 / a
        print(f"x1={x1}; x2={x2}")
