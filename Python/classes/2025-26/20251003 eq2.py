# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# a x^2 + b x + c = 0
a = float(input("a:"))
b = float(input("b:"))
c = float(input("c:"))

if a != 0:
    delta = b**2 - 4 * a * c
    x1 = (-b + delta**0.5) / 2 / a
    x2 = (-b - delta**0.5) / 2 / a
    print(x1, x2)
else:
    print("First grade eq")

    if b == 0:
        print("D'ho!")
    else:
        x = -c / b
        print("The solution is", x)
