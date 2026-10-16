# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

numbers = list()
while user := input("> "):
    numbers.append(int(user))

if not numbers:
    print("No elements")
else:
    print(
        f"{len(numbers)} elements, max: {max(numbers)}, min: {min(numbers)}, average: {sum(numbers) / len(numbers):,.2f}"
    )
