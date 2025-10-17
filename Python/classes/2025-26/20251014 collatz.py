# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

number = 0
while number < 1:
    number = int(input("Tell me a number > 1: "))


assert number > 0
while number != 1:
    print(number, end=' ')
    if number % 2 == 0:
        number = number // 2
    else:
        number = number * 3 + 1
print(number)
