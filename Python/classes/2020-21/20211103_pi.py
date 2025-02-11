# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import random
from math import pi

NUM_TRIES = 100_000_000

hit = miss = 0

for n in range(NUM_TRIES):
    x = random.random()
    y = random.random()

    if x**2 + y**2 < 1:
        hit += 1
    else:
        miss += 1

ratio = hit / miss
print(f"hits: {hit:,}; misses: {miss:,}; ratio: {ratio:.2f}%")

estimated_pi = 4 * hit / NUM_TRIES
print(f"Estimated Pi: {estimated_pi}; error: {(estimated_pi-pi)/pi*100:.2g}%")
