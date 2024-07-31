# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

num = 0
tot = 0
while num >= 0:
    tot = tot + num
    num = int(input("Num: "))
print(f"Total: {tot:,}")
