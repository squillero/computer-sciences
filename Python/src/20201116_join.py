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
    friends = ['Alice', 'Bob', 'Carla', 'David']

    result = ""
    for n in friends[:-1]:
        result = result + n + ", "
    result = result + friends[-1]

    print(f">>>> {result} <<<<")


if __name__ == '__main__':      # BLACK MAGIC!
    main()
