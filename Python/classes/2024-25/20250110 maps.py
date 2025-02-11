# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = '20250110 map.dat'
SEA = '.'
ISLAND = '#'
STAR = '*'


def read_map(filename):
    map_ = list()
    try:
        with open(filename) as file:
            for line in file:
                map_.append(list(line.rstrip()))
    except OSError:
        exit("Last lecture, bug off")
    return map_


def print_map(map_):
    for line in map_:
        print(' '.join(line))


def find_stars(map_):
    stars = list()
    for r, row in enumerate(map_):
        for c, point in enumerate(row):
            if point == STAR:
                stars.append((r, c))
    return stars


def main():
    map_ = read_map(FILENAME)
    for r_star, c_star in find_stars(map_):
        r, c = r_star, c_star
        while r >= 0 and map[r][c] == SEA:
            r -= 1
            ...


if __name__ == '__main__':
    main()
