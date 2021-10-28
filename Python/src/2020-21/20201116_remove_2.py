# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

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
