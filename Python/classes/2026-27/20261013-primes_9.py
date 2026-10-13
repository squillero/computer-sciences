# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

from math import sqrt

prime_numbers = list()

limit = int(input("Enter a number: "))

for number in range(2, limit + 1):
    for n in prime_numbers:  # could be optimize more
        if number % n == 0:
            prime = False
            break  # not structured, but ok
    else:  # for's else: exit without breaks
        prime = True
    if prime:
        prime_numbers.append(number)

print(prime_numbers)
