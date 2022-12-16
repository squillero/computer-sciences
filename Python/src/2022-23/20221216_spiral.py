# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint

DIM = 10


def print_canvas(canvas):
    for line in canvas:
        print(''.join(line))
    print()


def hstroke(canvas, row, c_start, c_end):
    if c_start > c_end:
        c_start, c_end = c_end, c_start
    for c in range(c_start, c_end + 1):
        canvas[row][c] = '*'
    print_canvas(canvas)


def vstroke(canvas, col, r_start, r_end):
    if r_start > r_end:
        r_start, r_end = r_end, r_start
    for r in range(r_start, r_end + 1):
        canvas[r][col] = '*'
    print_canvas(canvas)


def main():
    canvas = list()
    for _ in range(DIM):
        canvas.append(['.'] * DIM)

    for n in range(2):
        hstroke(canvas, DIM - 1 - n * 2, n * 2, DIM - 1 - n * 2)
        vstroke(canvas, DIM - 1 - n * 2, DIM - 1 - n * 2, n * 2)
        hstroke(canvas, n * 2, DIM - 1 - n * 2, 2 + n * 2)
        vstroke(canvas, n * 2, n * 2, DIM - 1 - n * 2)


if __name__ == '__main__':
    main()
