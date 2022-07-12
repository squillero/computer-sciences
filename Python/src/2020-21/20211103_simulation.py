# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

# Is 7 really more probable with 2 dices?

NUM_TOSSES = 1_000_000
DICE_LOW = 1
DICE_HIGH = 6

import random

n2 = n3 = n7 = 0

for t in range(NUM_TOSSES):
    d1 = random.randint(DICE_LOW, DICE_HIGH)
    d2 = random.randint(DICE_LOW, DICE_HIGH)

    if d1 + d2 == 2:
        n2 += 1
    elif d1 + d2 == 3:
        n3 += 1
    elif d1 + d2 == 7:
        n7 += 1

print(
    f"2's {n2/NUM_TOSSES*100:.2f}% -- 3's {n3/NUM_TOSSES*100:.2f}% -- 7's {n7/NUM_TOSSES*100:.2f}%")
