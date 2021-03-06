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

def factorial(num):
    fact = 1
    for n in range(1, num+1):
        fact = fact * n
    num = "num is a local name!!!!!"
    print(f"num inside factorial: '{num}'")
    return fact


num = int(input("number: "))
f = factorial(num)
print(f"{num}! = {f}")
print(f"num outside factorial: '{num}'")
