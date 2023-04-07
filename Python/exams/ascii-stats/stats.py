# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

FILENAME = 'landscape-small.txt'


def readfile(filename):
    data = list()
    try:
        with open(filename) as file:
            data.extend(file.readlines())
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(1)
    return data


def main():
    landscape = readfile(FILENAME)
    rows = len(landscape)
    columns = len(landscape[0]) - 1
    print(f"Landscape size: {rows} rows, {columns} columns.")

    try:
        coords = input("Please, enter the coordinates (x,y): ")
        xs, ys = coords[1:-1].split(',')
        x, y = int(xs), int(ys)
        size = int(input("Please, enter the square size: "))
    except ValueError:
        print("D'ho!?")
        exit(1)

    if not 0 <= x <= columns - size or not 0 <= y <= rows - size:
        print("ERROR!! the square to analyze is out of limits.")
        exit(1)

    stat = dict()
    for r in range(y, y + size):
        for c in range(x, x + size):
            symbol = landscape[r][c]
            if symbol not in stat:
                stat[symbol] = 0
            stat[symbol] += 1

    # more idiomatic...
    #from collections import Counter
    #stat = Counter()
    #for line in landscape[y:y + size]:
    #    stat.update(line[x:x + size])

    for s in sorted(stat, key=lambda k: stat[k], reverse=True):
        print(f"{s}-> {stat[s]/size/size*100:4.1f}%")


if __name__ == '__main__':
    main()