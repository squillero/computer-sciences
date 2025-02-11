# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

DIM_COLUMNS = 20
DIM_ROWS = 5


def print_array(array):
    for row in array:
        print('|'.join(row))


def main():
    array2d = list()
    for _ in range(DIM_ROWS):
        array2d.append(['*'] * DIM_COLUMNS)
    print_array(array2d)
    print()
    array2d[0][1] = '!'
    array2d[1][2] = '+'
    print_array(array2d)


if __name__ == '__main__':
    main()
