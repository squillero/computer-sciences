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

value = float(input("Value: "))

if value >= 8:
    print("Most structures fall")
if 8 > value >= 7:
    print("Many buildings destroyed")
if 7 > value >= 6:
    print("Many buildings considerably damages, some collapse")
if 6 > value >= 4.5:
    print("Damage to poorly constructed buildings")
if value < 4.5:
    print("No destruction of buildings")
