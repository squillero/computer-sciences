#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/

balance = 1000
target = 2 * balance
year = 0

rate = float(input("Rate%: "))

print(f"Current balance in 2020 is {balance:.2f}$")
while balance <= target:
    year = year + 1
    interest = balance * rate / 100
    balance = balance + interest
    print(f"Expected balance in year {2020+year} is {balance:.2f}$")
else:
    print(f"Achievement accomplished (amount doubled after {year} years)!")
