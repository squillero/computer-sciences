# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

DIM = 12

for n1 in range(1, DIM + 1):
    for n2 in range(1, DIM + 1):
        print(f"{n1*n2:4d}", end='')
    print()
