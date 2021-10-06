#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

single = input("Are you single? [y/n] ")
income = float(input("Income: "))

if single == "y":
    if income < 32000:
        net = income - income * .1
        print(f"Net income: {net}")
    else:
        net = income - 3200 - (income - 32000) * .25
        print(f"Net income: {net}")
else:
    if income < 64000:
        net = income - income * .1
        print(f"Net income: {net}")
    else:
        net = income - 6400 - (income - 64000) * .25
        print(f"Net income: {net}")
