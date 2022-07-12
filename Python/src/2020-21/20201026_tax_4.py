# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

single = input("Are you single? [y/n] ")
income = float(input("Income: "))

if single.lower() == "y" and income < 32000:
    net = income - income * .1
elif single.lower() == "y" and income >= 32000:
    net = income - 3200 - (income - 32000) * .25
elif single.lower() != "y" and income < 64000:
    net = income - income * .1
else:
    net = income - 6400 - (income - 64000) * .25

print(f"Net income: {net}")
