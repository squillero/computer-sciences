# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

from random import randint

from pprint import pprint

NUM_ROWS = 5
NUM_COLUMNS = 8

# Safe: create a "table" :-(
table = list()
for _ in range(NUM_ROWS):
    table.append([None] * NUM_COLUMNS)

# Fill it up
for r in range(NUM_ROWS):
    for c in range(NUM_COLUMNS):
        table[r][c] = randint(0, 99)

# Print
for r in range(NUM_ROWS):
    for c in range(NUM_COLUMNS):
        print(f"{table[r][c]:2d}", end=" ")
    print()

pprint(table)
