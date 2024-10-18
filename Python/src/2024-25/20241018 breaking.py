# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic

ic()
for num in range(10_000_000):
    print(num)
    if num >= 30:
        break

ic()
for num in range(10):
    print(num)
    if num == 4:
        continue
    print("Yeah!")

ic()
for num in range(10_000_000):
    print(num)
    if num >= 5:
        break
else:
    print("The for loop ended smoothly")
    
ic()
for num in range(4):
    print(num)
    if num >= 5:
        break
else:
    print("The for loop ended smoothly")

ic()
for num in range(10):
    if num >= 5:
        continue
    print(num)
else:
    print("The for loop ended smoothly")
