# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

num = 0
tot = 0
while num >= 0:
    tot = tot + num
    num = int(input("Num: "))
print(f"Total: {tot:,}")
