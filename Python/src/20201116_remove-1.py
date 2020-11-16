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


import random

def main():
    """Main entry point"""

    array = [1, 2, 5, 5, 3, 4]
    target = 5

    i = 0
    while i < len(array):
        if array[i] == target:
            array.pop(i)
        else:
            i = i + 1
    pass


if __name__ == '__main__':      # BLACK MAGIC!
    main()
