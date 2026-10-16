# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

data = list("Giovanni Adolfo Pio Pietro Squillero")

for element in data:
    ... # use `element`

for index in range(len(data)):
    ... # access `data[i]` -- try not to do it

for index, element in enumerate(data):
    ... # correct way to have both `index` and `element`