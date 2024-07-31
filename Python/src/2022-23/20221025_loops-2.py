# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

num = int(input('Num: '))
max_ = num
min_ = num
cnt = 0
while num > 0:
    cnt += 1
    max_ = max(num, max_)
    min_ = min(num, min_)
    num = int(input('Num: '))
print(f"You eneterd {cnt:,} numbers between {min_:,} and {max_:,}")
