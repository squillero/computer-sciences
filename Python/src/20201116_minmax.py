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
        array.append(random.randint(-1_000_000_000, +1_000_000_000))
    print(array)

    smallest = largest = array[0]
    for e in array:
        if e > largest:
            largest = e
        if e < smallest:
            smallest = e
    print(f"Largest: {largest}, smallest: {smallest}")

    smallest = largest = None
    for e in array:
        if largest is None or e > largest:      # ie. largest == None
            largest = e
        if smallest is None or e < smallest:
            smallest = e
    print(f"Largest: {largest}, smallest: {smallest}")



if __name__ == '__main__':      # BLACK MAGIC!
    main()
