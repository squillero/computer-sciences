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
threshold = 32000

if single.upper() != "Y":
    threshold = 64000

if income < threshold:
    net = income * .1
else:
    net = income - threshold * .1 - (income - threshold) * .25

print(f"Net income: {net}")
