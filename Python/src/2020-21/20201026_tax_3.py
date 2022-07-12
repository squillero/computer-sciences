# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

single = input("Are you single? [y/n] ")
income = float(input("Income: "))
threshold = 32000

if single.upper() != "Y":
    threshold = 64000

if income < threshold:
    net = income * .1
else:
    net = income - threshold * .1 - (income - threshold) * .25

print(f"Net income: {net}")
