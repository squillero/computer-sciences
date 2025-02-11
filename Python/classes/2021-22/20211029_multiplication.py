# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

TABLE_SIZE = 10

for r in range(1, TABLE_SIZE + 1):
    for c in range(1, TABLE_SIZE + 1):
        print(f"{r*c:8d}", end='')
    print()

print("All done.")
