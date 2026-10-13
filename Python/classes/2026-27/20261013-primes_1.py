# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

number = int(input("Enter a number: "))

num_divisors = 0
for n in range(1, number + 1):
    if number % n == 0:
        # print(f"{number} can be divided by {n}!")
        num_divisors = num_divisors + 1
if num_divisors == 2:
    print(f"{number} is a prime!")
else:
    print(f"{number} is not a prime")
