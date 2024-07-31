# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

MAP_FILENAME = '20220114_map.txt'


def peak(map_, row, col):
    for r, c in [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]:
        try:
            if map_[row + r][col + c] != map_[row][col] - 1:
                return False
        except IndexError:
            pass
    return True


def main():
    map_ = read_map(MAP_FILENAME)
    for row in range(len(map_)):
        for col in range(len(map_[0])):
            if peak(map_, row, col):
                print(f"{map_[row][col]} {row} {col}")


def read_map(filename):
    map_ = list()
    try:
        with open(filename) as file_in:
            for line in file_in:
                values = list()
                for v in line.split():
                    values.append(int(v))
                map_.append(values)
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(0)
    return map_


if __name__ == '__main__':
    main()
