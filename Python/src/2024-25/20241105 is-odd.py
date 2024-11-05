# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def is_odd(number):
    if number % 2 == 0:
        return False
    else:
        return True


num = int(input("number: "))
if is_odd(num):
    print("Yeah!")
