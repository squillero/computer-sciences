# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

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
