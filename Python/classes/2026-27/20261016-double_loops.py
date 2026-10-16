# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

MAX_NUMBER = 12

for r in range(1, MAX_NUMBER + 1):
    for c in range(1, MAX_NUMBER + 1):
        print(f"{r * c:8d}", end="")
    print()

for r in range(1, MAX_NUMBER + 1):  # outer loop
    for c in range(1, r + 1):  # inner loop: variable number of iterations
        print(f"{r * c:8d}", end="")
    print()
