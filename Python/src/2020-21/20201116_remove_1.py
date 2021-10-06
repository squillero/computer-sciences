#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

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


if __name__ == '__main__':  # BLACK MAGIC!
    main()
