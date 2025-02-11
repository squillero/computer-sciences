# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from random import randint

MAX_NUMBER = 100


def is_sorted(list_):
    sorted = True
    for i in range(len(list_) - 1):
        if list_[i] > list_[i + 1]:
            sorted = False
    return sorted


def is_sorted2(list_):
    sorted = True
    for i in range(1, len(list_)):
        if list_[i - 1] > list_[i]:
            sorted = False
    return sorted


def is_sorted_unstructured(list_):
    for i in range(len(list_) - 1):
        if list_[i] > list_[i + 1]:
            return False
    return True


def is_sorted_unstructured_zip(list_):
    for a, b in zip(list_, list_[1:]):
        if a > b:
            return False
    return True


array = [randint(0, 100)]
while is_sorted(array):
    array.append(randint(0, 100))

# array = array[:-1]

array.pop()
print(array)

# ps.
# remove the first element: array[1:] or array.pop(0)
