# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

num = -1
while num < 0:
    num = int(input("Tell me a positive number or zero: "))

fact = 1
while num > 1:
    fact *= num
    num -= 1
print(fact)
