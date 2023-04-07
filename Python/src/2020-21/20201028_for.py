# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

DIM = 12

for n1 in range(1, DIM + 1):
    for n2 in range(1, DIM + 1):
        print(f"{n1*n2:4d}", end='')
    print()
