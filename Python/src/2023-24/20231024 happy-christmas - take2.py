# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from random import random

TREE_CANOPY_SIZE = 10
TREE_TRUNK_SIZE = 5

for line in range(TREE_CANOPY_SIZE):
    print("." * (TREE_CANOPY_SIZE - line - 1), end="")
    for row in range(line + 1 + line):
        if random() < 0.15:
            fill = "*"
        else:
            fill = "%"
        print(fill, end="")
    print("." * (TREE_CANOPY_SIZE - line - 1), end="")
    print()

for line in range(TREE_TRUNK_SIZE):
    print("." * (TREE_CANOPY_SIZE - 2), end="")
    print("###", end="")
    print("." * (TREE_CANOPY_SIZE - 2), end="")
    print()

print("." * (TREE_CANOPY_SIZE - 4), end="")
print("#######", end="")
print("." * (TREE_CANOPY_SIZE - 4), end="")

print()
