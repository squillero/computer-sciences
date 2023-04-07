# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

i1 = 1
i2 = 1

print(1)
print(1)
for n in range(100):
    i0 = i1
    i1 = i2
    i2 = i1 + i0
    print(f"{i2:,}")
