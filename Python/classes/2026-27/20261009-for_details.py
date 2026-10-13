# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

for number in range(7):
    print(f"Checkpoint 1 ({number})")
    if number % 3 == 0:
        continue
    print(f"Checkpoint 2 ({number})")
    if number == 7:
        break
    print(f"Checkpoint 3 ({number})")
    print()
else:
    print("Natural exit (empty container)...")
print("Outside the for")
