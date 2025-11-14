# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint
from random import randint

NUM_ELEMENTS = 5
RAND_MAX = 99


def binary_search(target, array):
    a, b = 0, len(array)

    completed = False
    while not completed:
        i = (a + b) // 2
        if array[i] == target:
            completed = True
        if b == a + 1:
            i = None
            completed = True
        elif array[i] < target:
            a = i
        else:
            b = i
    return i


def linear_search(target, array):
    for i, e in enumerate(array):
        if e == target or e > target:
            break
    if e == target:
        return i
    else:
        return None


def main():
    data = list()
    for _ in range(NUM_ELEMENTS):
        data.append(randint(0, RAND_MAX))
    data.sort()
    pprint(data)
    num = int(input("Number: "))
    print(f"Binary Search: {binary_search(num, data)}")
    print(f"Linear Search: {linear_search(num, data)}")
    print(f"Linear Search: {data.index(num)}")


if __name__ == "__main__":
    main()
