#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/

import random


def main():
    """Main entry point"""

    array = []
    for i in range(10000):
        array.append(random.randint(-1_000, +1_000))
    print(array)

    target = 42
    found = None
    for i, e in enumerate(array):
        if e == target and found is None:
            found = i
    if found is not None:  # if found != None
        print(f"Element {target} found at position {found}")
    else:
        print(f"Element {target} not found")


if __name__ == '__main__':  # BLACK MAGIC!
    main()
