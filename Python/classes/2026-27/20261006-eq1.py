# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

a = 0
b = 0

# solving a x + b = 0

if a != 0:
    x = -b / a
    print("The solution is:", x)
else:
    if b == 0:
        print("Indeterminate")
    else:
        print("D'ho: no solution")


if a != 0:
    x = -b / a
    print("The solution is:", x)
elif b == 0:
    print("Indeterminate")
else:
    print("D'ho: no solution")
