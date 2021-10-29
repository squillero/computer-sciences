# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

TABLE_SIZE = 10

for r in range(1, TABLE_SIZE + 1):
    for c in range(1, TABLE_SIZE + 1):
        print(f"{r*c:8d}", end='')
    print()

print("All done.")
