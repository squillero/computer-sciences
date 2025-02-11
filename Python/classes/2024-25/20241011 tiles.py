# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

TILE_WIDTH = 5

total_width = int(input("Total width: "))
n_pairs = (total_width - TILE_WIDTH) // (2 * TILE_WIDTH)
print(f"Total number of pairs: {n_pairs}")
total_gap = total_width - TILE_WIDTH - n_pairs * 2 * TILE_WIDTH
print(f"Gap: {total_gap}")

print(f"Gap in each side: {total_gap/2:g}in")
