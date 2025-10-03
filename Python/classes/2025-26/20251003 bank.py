# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

INTEREST_RATE = 50 / 100

amount = 1
years = 0

print(amount)
while amount < 2:
    years = years + 1
    amount = amount * (1 + INTEREST_RATE)
    print(amount)

print("Doubled in", years, "years")
