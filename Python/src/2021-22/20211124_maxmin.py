# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import random

LIST_LENGTH = 100
MIN_VALUE = 0
MAX_VALUE = 999999


def main():
    my_list = list()
    for n in range(LIST_LENGTH):
        my_list.append(random.randint(MIN_VALUE, MAX_VALUE))

    min_ = max_ = my_list.pop()
    for n in my_list:
        if n > max_:
            max_ = n
        if n < min_:
            min_ = n

    print(f"Max: {max_:,}; min: {min_:,}")


main()
