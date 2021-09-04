#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/

print("Enter your votes, end with -1")

sum_ = 0  # standard way for NOT shadowing a common name (or using a reserved keyword)
num = 0

vote = 9999
while vote >= 0:
    vote = int(input(":"))
    if vote >= 0:  # handling sentinel: duplicate condition
        sum_ = sum_ + vote
        num = num + 1

print(f"{num} votes, average is {sum_/num:.1f}")
