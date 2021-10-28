# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences


def draw_line(size):
    print("#" * size)


def main():
    foo = int(input("Square size: "))
    draw_square(foo)


def draw_square(size):
    for l in range(size):
        draw_line(size)


main()
