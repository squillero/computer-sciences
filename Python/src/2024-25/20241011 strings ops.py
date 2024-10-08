# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

s = input()

if s.isalpha():
    print("All letters")
if s.isalnum():
    print("All letters or numbers")
if s.isdecimal():
    print("Decimal number")

