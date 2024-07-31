# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

number = int(input("Start number: "))

while number > 1:
    if number % 2 == 0:
        number = number // 2
    else:
        number = number * 3 + 1
    print(number)
