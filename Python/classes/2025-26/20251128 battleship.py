# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

MAP_PLAYER_1 = 'map1.dat'
MAP_PLAYER_2 = 'map2.dat'
MOVES = 'moves.txt'


def read_map(filename):
    map_ = list()
    try:
        with open(filename) as map_file:
            for line in map_file:
                map_.append(list(line.rstrip()))
    except OSError as problem:
        print(f"Huston, we have a problem: {problem}")
        exit(0)

    return map_


def read_moves(filename):
    moves = list()
    try:
        with open(filename) as moves_file:
            for line in moves_file:
                r, c = line.rstrip().split(',')
                r = ord(r) - ord('A')
                c = int(c) - 1
                moves.append((r, c))
    except OSError as problem:
        print(f"Huston, we have a problem: {problem}")
        exit(0)
    return moves


def play(map1, map2, moves):
    all_maps = {True: map1, False: map2}
    player = False
    for r, c in moves:
        if player:
            player_name = 'Alice'
        else:
            player_name = 'Bob'
        if all_maps[player][r][c] == '#':
            print(f"{player_name} shot @ {r}, {c} and hit")
            all_maps[player][r][c] = '*'
        else:
            print(f"{player_name} shot @ {r}, {c} and missed")
            all_maps[player][r][c] = 'o'
        player = not player


def print_map(map):
    for line in map:
        for square in line:
            if square == '#':
                square = '-'
            print(square, end='')
        print()


def main():
    map1 = read_map(MAP_PLAYER_1)
    map2 = read_map(MAP_PLAYER_2)
    # pprint(map1)
    moves = read_moves(MOVES)
    # pprint(moves)
    play(map1, map2, moves)
    print_map(map1)
    print()
    print_map(map2)


if __name__ == '__main__':
    main()
