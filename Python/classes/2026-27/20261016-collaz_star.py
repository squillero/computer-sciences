# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

max_ = (0, None)

for n in range(1, 10_000 + 1):
    collaz_sequence = [n]
    while n > 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        collaz_sequence.append(n)
    length = len(collaz_sequence)
    if length > max_[0]:
        print(f"Length of collaz({collaz_sequence[0]:,}) is {length}")
        max_ = length, collaz_sequence[0]

print(f"The seed for the longest Collaz sequence is {max_[1]:,} (length: {max_[0]:,})")
