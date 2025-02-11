# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

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
