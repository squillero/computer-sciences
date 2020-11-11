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
    foo = list("ABCDEF")

    print(foo)
    
    # slice to substitute
    # foo[2:3] = ['XXX', 'YYY', 'ZZZ']

    # slice to insert
    # foo[2:2] = ['XXX', 'YYY', 'ZZZ']

    # slice to remove
    # foo[2:3] = []

    print(foo)


if __name__ == '__main__':      # BLACK MAGIC!
    main()
