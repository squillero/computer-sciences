# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

DATA = [1, 3, 5, 7, 9, 11, 23, 45]
#DATA = [1, 3, -5, 7, 9, 11, 23, 45]


def main():
    """Check if all element of an array are non decreasing"""

    # giovanni-giulio's algorithm
    if DATA == sorted(DATA):
        print("Yeah!")

    nd = True
    for i in range(len(DATA)-1):
        if DATA[i] > DATA[i+1]:
            nd = False
    if nd:
        print("Yeah!")

    nd = True
    for l1, l2 in zip(DATA, DATA[1:]):
        if l1 > l2:
            nd = False
    if nd:
        print("Yeah!")


if __name__ == '__main__':
    main()
