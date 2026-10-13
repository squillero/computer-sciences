# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

val = input("Type a number: ")
val = int(val)

# Check if a number is both odd and big (> 10_000)
if val % 2 != 0 and val > 10_000:
    print("Val is both ODD and BIG")

# Check if a number is between 99 and 999
if val >= 99 and val <= 999:
    print("Val is between 99 and 999")
if 99 <= val <= 999:    # more Pythonic
    print("Val is between 99 and 999")
