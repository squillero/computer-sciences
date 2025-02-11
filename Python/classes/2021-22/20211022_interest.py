# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

start_money = float(input("Initial money: "))
interest_rate = float(input("Interest rate: "))

current_money = start_money
year = 0

while current_money < 2 * start_money:
    year += 1
    current_money = current_money + current_money * interest_rate

print(f"Whoa! After {year:,} years, I have ${current_money:.2f}!!!")
