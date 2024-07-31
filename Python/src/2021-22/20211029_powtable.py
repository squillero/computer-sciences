# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

NUM_ROWS = 10
NUM_COLUMNS = 6

for c in range(NUM_COLUMNS):
    header = f"x**{c+1}"
    print(f"{header:>10s}", end=' |')
print()
for r in range(NUM_ROWS):
    for c in range(NUM_COLUMNS):
        print(f"{(r+1)**(c+1):10,d}", end=' |')
    print()
