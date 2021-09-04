#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-science   |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/

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
