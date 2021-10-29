# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

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
