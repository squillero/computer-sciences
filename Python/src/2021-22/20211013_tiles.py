# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

TILE_SIZE = 5

# Change the following line and run
total_width = 105

usable_width = total_width - TILE_SIZE
num_pairs = usable_width // (2 * TILE_SIZE)
tile_width = TILE_SIZE + 2 * num_pairs * TILE_SIZE
total_gap = total_width - tile_width
gap = total_gap / 2

print(f"With a wall of {total_width}cm we can use {1+2*num_pairs} tiles")
print(f"corresponding to {tile_width}cm and we need a gap of {gap}cm each end")
