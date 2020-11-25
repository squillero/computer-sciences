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
