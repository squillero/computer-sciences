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

print("Enter your votes, end with -1")

sum_ = 0    # standard way for NOT shadowing a common name (or using a reserved keyword)
num = 0

finished = False
while not finished:     # handling sentinel: extra variable
    vote = int(input(":"))
    if vote < 0:
        finished = True
    else:
        sum_ = sum_ + vote
        num = num + 1
if not num:     # that is: num == 0 or something else
    print("D'ho!?")
else:
    print(f"{num} votes, average is {sum_/num:.1f}")
