# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

f0 = 1
f1 = 1
print(f"{f0}\n{f1}")
while f1 < 10_000_000_000_000_000_000:
    f2 = f0 + f1
    print(f"{f2:,}")
    f0 = f1
    f1 = f2

print("\\")