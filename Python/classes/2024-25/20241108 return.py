# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def answer():
    return 42


def no_aswer():
    print("D'ho!?")


x = answer()
answer()
z = 2 * answer()

no_aswer()
value = no_aswer()
print(value)

if value is None:
    print("Whoa! Value is None!!!!")
