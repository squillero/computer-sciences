# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

money = 1
rate = float(input("Interest rate: "))
goal = 2 * money

years = 0
while money < goal:
    years += 1  # years = years + 1
    money += money * rate  # money = money + money * rate

print(f"After {years} years, my money doubled!")
