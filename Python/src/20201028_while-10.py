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

print("Enter max")

sum_ = 0    # standard way for NOT shadowing a common name (or using a reserved keyword)
num = 0

flag_even = False   # that's a flag
finished = False    # usual boolean variable

while not finished:
    number = int(input(":"))
    if number < 0:
        finished = True
    else:
        if number % 2 == 0:
            flag_even = True    # flag gets true

if flag_even:
    print("Found at least one even number!")
