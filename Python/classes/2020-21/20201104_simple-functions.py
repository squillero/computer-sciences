# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def draw_line(size):
    print("#" * size)


def main():
    foo = int(input("Square size: "))
    draw_square(foo)


def draw_square(size):
    for l in range(size):
        draw_line(size)


main()
