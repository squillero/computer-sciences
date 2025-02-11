# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

DIM = 30
JINGLE = 'jingle.txt'


def print_canvas(canvas):
    for line in canvas:
        print(''.join(line))
    print()


def hstroke(canvas, row, c_start, c_end, color=None):
    step = 1 if c_start < c_end else -1
    if color is None:
        color = ['*'] * (abs(c_end - c_start) + 1)
    for c in range(c_start, c_end + step, step):
        canvas[row][c] = color.pop(0)


def vstroke(canvas, col, r_start, r_end, color=None):
    step = 1 if r_start < r_end else -1
    if color is None:
        color = ['*'] * (abs(r_end - r_start) + 1)
    for r in range(r_start, r_end + step, step):
        canvas[r][col] = color.pop(0)


def main():
    canvas = list()
    for _ in range(DIM):
        canvas.append([' '] * DIM)

    try:
        with open(JINGLE) as jingle:
            song = list(jingle.read().replace('\n', '*').replace(' ', '*'))
    except OSError:
        print("Happy holiday!")
        exit(1)

    for step in range(7):
        vstroke(canvas, 0 + 2 * step, 0 + 2 * step, DIM - 2 - 2 * step, color=song)
        hstroke(canvas, DIM - 1 - 2 * step, 0 + 2 * step, DIM - 2 - 2 * step, color=song)
        vstroke(canvas, DIM - 1 - 2 * step, DIM - 1 - 2 * step, 1 + 2 * step, color=song)
        hstroke(canvas, 0 + 2 * step, DIM - 1 - 2 * step, 2 + 2 * step, color=song)
        canvas[1 + 2 * step][2 + 2 * step] = song.pop(0)
    print_canvas(canvas)


if __name__ == '__main__':
    main()
