# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

from math import sqrt

number = int(input("Enter a number: "))

if number < 2:
    prime = False
else:
    prime = True

n = 2
while prime and n < 1 + round(sqrt(number)):
    if number % n == 0:
        prime = False
    n += 1  # same as n=n+1 because int can't be modified

if prime:
    print(f"{number} is a prime!")
else:
    print(f"{number} is not a prime")
