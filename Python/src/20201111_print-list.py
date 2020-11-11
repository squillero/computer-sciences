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
    friends = ['Alice', 'Bob', 'Carl', 'Denise']
    print(comma_print_1(friends))
    print(comma_print_2(friends))
    print(str.join(', ', friends))      # alt: print(', '.join(friends))

    # not part of this course
    print(*friends, sep=', ')


def comma_print_1(list_):
    result = ''
    for i in range(len(list_)):
        if i > 0:
            result = result + ', '
        result = result + list_[i]
    return result


def comma_print_2(list_):
    result = ''
    for e in list_[:-1]:
        result = result + e + ', '
    result = result + list_[-1]
    return result


if __name__ == '__main__':      # BLACK MAGIC!
    main()
