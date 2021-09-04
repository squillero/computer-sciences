#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-science   |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/

import random


def main():
    """Main entry point"""

    array = [5, 1, 2, 5, 5, 3, 4]
    target = 5

    for i in range(len(array) - 1, -1, -1):
        if array[i] == target:
            array.pop(i)
    pass


if __name__ == '__main__':  # BLACK MAGIC!
    main()
