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


def main():
    """Main entry point"""
    foo = list("Giovanni Adolfo Pietro Pio Squillero")
    pos = my_index(foo, "i")
    print(pos)


def my_index(list_, element):
    """Returns a list with all the positions of element in list_"""
    pos = []
    for i, e in enumerate(list_):
        if e == element:
            pos.append(i)
    return pos


if __name__ == '__main__':      # BLACK MAGIC!
    main()
