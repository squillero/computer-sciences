# Copyright © 2020 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

single = input("Are you single? [y/n] ")
income = float(input("Income: "))

if single.lower() == "y":
    if income < 32000:
        net = income - income * 0.1
    else:
        net = income - 3200 - (income - 32000) * 0.25
else:
    if income < 64000:
        net = income - income * 0.1
    else:
        net = income - 6400 - (income - 64000) * 0.25

print(f"Net income: {net}")
