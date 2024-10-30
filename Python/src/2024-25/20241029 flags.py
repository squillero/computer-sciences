# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from random import randint

numbers = list()
for _ in range(10):
    numbers.append(randint(0, 100))

# Check that all the values are above 5
# ???

# Count values below or equal 5
count = 0
for n in numbers:
    if n <= 5:
        count += 1
if count == 0:
    print("Whoa! All values are above 5")

# Count values below or equal 5 (take 2)
count = 0
for n in numbers:
    if n <= 5:
        count = 1
if count == 0:
    print("Whoa! All values are above 5")

# Check that all the values are above 5
all_above_five_flag = True
for n in numbers:
    if n <= 5:
        all_above_five_flag = False
if all_above_five_flag:
    print("Whoa! All values are above 5")

# Check that all the values are above  with early stop (terrible)
for n in numbers:
    if n <= 5:
        break
else:
    print("Whoa! All values are above 5 (early stop)")

if all(n > 5 for n in numbers):
    print("Whoa! All values are above 5 (all)")
