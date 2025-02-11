# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

num = int(input("Number :"))

n = 2
while num > 1:
    if num % n == 0:
        print(f"Can be divided by {n}")
        num = num // n
    else:
        n = n + 1
        