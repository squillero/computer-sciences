# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint

ROWS = 5
COLUMNS = 10

# create a list of size COLUMNS
# row = [None] * COLUMNS
# pprint(row)

# Safe create an 2-dim array ROWS x COLUMNS
data = list()
for r in range(ROWS):
    data.append([0] * COLUMNS)
data[1][2] = 1
data[2][1] = 3
pprint(data)
