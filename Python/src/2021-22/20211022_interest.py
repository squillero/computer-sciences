# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

start_money = float(input("Initial money: "))
interest_rate = float(input("Interest rate: "))

current_money = start_money
year = 0

while current_money < 2 * start_money:
    year += 1
    current_money = current_money + current_money * interest_rate

print(f"Whoa! After {year:,} years, I have ${current_money:.2f}!!!")
