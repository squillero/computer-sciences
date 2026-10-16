# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

max_length = 0
max_seed = -1

for n in range(1, 10_000 + 1):
    collaz_sequence = [n]
    while n > 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        collaz_sequence.append(n)
    length = len(collaz_sequence)
    if length > max_length:
        print(f"Length of collaz({collaz_sequence[0]:,}) is {length}")
        max_seed = collaz_sequence[0]
        max_length = length

print(f"The seed for the longest Collaz sequence is {max_seed:,} (length: {max_length:,})")
