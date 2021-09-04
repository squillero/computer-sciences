#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/

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
