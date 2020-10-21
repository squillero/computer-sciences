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

str1 = input("First string : ")
str2 = input("Second string: ")

if str1 == str2:
    print("Hey, they are equal!")
else:
    # Hey! Not the best optiom
    if str1 < str2:
        print(f'"{str1}" is first')
        print(f'"{str2}" is last')
    else:
        print(f'"{str2}" is first')
        print(f'"{str1}" is last')

print("That's all folks...")
