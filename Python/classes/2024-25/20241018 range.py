# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic

ic()
for num in [0, 1, 2, 3, 4, 5, 6]:
    print(num)

ic()
for num in range(7):
    print(num)

ic()
for num in range(18, 31):
    print(num)

ic()
for num in range(0, 100, 10):
    print(num)

ic()
for num in range(10, 0, -1):
    print(num)

ic()
for crazy in range(10, 0):
    print(crazy)

foo = range(20_000_000_000)
ic(foo)

foo = range(20)
bar = list(foo)
ic(bar)
