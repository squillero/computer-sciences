# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.


def collaz(seed):
    """Returns a collaz sequence starting with seed."""
    sequence = [seed]
    while seed > 1:
        if seed % 2 == 0:
            seed = seed // 2
        else:
            seed = 3 * seed + 1
        sequence.append(seed)
    return sequence


def main():
    max_length = 0
    max_seed = -1
    for n in range(1, 10_000 + 1):
        collaz_sequence = collaz(n)
        length = len(collaz_sequence)
        if length > max_length:
            print(f"Length of collaz({collaz_sequence[0]:,}) is {length}")
            max_seed = collaz_sequence[0]
            max_length = length

    print(f"The seed for the longest Collaz sequence is {max_seed:,} (length: {max_length:,})")


main()
