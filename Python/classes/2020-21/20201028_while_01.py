# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

RATE = 2.5  # ie. 2.5%

balance = 100
target = 120
year = 0

print(f"Current balance in 2020 is {balance:.2f}$")
while balance == target:
    year = year + 1
    interest = balance * RATE / 100
    balance = balance + interest
    print(f"Expected balance in year {2020+year} is {balance:.2f}$")
else:
    print("Achievement accomplished!")
