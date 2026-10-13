# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

from math import sqrt

number = int(input("Enter a number: "))

if number < 2:
    prime = False
else:
    for n in range(2, 1 + round(sqrt(number))):
        if number % n == 0:
            prime = False
            break  # not structured, but ok
    else:  # for's else: exit without breaks
        prime = True

if prime:
    print(f"{number} is a prime!")
else:
    print(f"{number} is not a prime")
