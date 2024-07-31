# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

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
