# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = '20250110 map.dat'


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


def main():
    map_ = read_map(FILENAME)
    print_map(map_)

    map_[10][12] = '!'
    print()
    print_map(map_)


if __name__ == '__main__':
    main()
