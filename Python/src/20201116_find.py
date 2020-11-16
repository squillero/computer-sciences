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

    array = []
    for i in range(10000):
        array.append(random.randint(-1_000, +1_000))
    print(array)

    target = 42
    found = None
    for i, e in enumerate(array):
        if e == target and found is None:
            found = i
    if found is not None:           # if found != None
        print(f"Element {target} found at position {found}")
    else:
        print(f"Element {target} not found")



if __name__ == '__main__':      # BLACK MAGIC!
    main()
