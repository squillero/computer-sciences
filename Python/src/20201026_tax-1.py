##--------------#-----------------------------------------------------------#
#|              | CLASS SAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)            #
#|   ######     | (!) 2020, Giovanni Squillero <squillero@polito.it>        #
#|  #######     | https://github.com/squillero/computer-sciences            #
#|  ####   \    |                                                           #
#|   ###G  c\   | => Copying and distributing this file for classroom use,  #
#|   ##     _\  | either with or without modification, is permitted without #
#|   |    _/    | royalties provided that this 11-line comment is preserved #
#|   |   _/     |                                                           #
#|              | => THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY       #
##--------------#-----------------------------------------------------------#

single = input("Are you single? [y/n] ")
income = float(input("Income: "))

if single == "y":
    if income < 32000:
        net = income - income*.1
        print(f"Net income: {net}")
    else:
        net = income - 3200 - (income-32000)*.25
        print(f"Net income: {net}")
else:
    if income < 64000:
        net = income - income*.1
        print(f"Net income: {net}")
    else:
        net = income - 6400 - (income-64000)*.25
        print(f"Net income: {net}")
