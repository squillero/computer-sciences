# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

max_ = None  # safest choice
min_ = None  # safest choice
sum_ = 0
counter = 0

completed = False
while not completed:
    user = input("> ")
    if not user:
        completed = True
        continue

    number = int(user)
    counter += 1
    sum_ += number
    if max_ is None or number > max_:
        max_ = number
    if min_ is None or number < min_:
        min_ = number

if counter == 0:
    print("No elements")
else:
    print(f"{counter} elements, max: {max_}, min: {min_}, average: {sum_ / counter:,.2f}")
