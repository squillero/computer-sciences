# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import csv
from icecream import ic

PLAYERS_FILENAME = '20241213 players.csv'
GAMES_FILENAME = '20241213 games.csv'


def delta(player_1, player_2):
    return 1 / (1 + 2 ** ((player_1 - player_2) / 100))


def read_players(filename):
    players = dict()
    try:
        with open(filename) as file:
            file.readline()
            for line in file:
                player, selo = line.strip().split(',')
                players[player.strip()] = int(selo)
    except OSError as problem:
        exit(problem)
    return players


def read_players_csv(filename):
    players = dict()
    try:
        with open(filename) as file:
            file.readline()
            for line in csv.reader(file, delimiter=';'):
                ic(line)
    except OSError as problem:
        exit(problem)
    exit()
    return players


def update_scores(players, filename):
    try:
        with open(filename) as file:
            file.readline()
            for line in file:
                p1, p2, r = line.strip().split(',')
                p1 = p1.strip()
                p2 = p2.strip()
                if p1 not in players:
                    players[p1] = 1500
                if p2 not in players:
                    players[p2] = 1500
                d = 200 * delta(players[p1], players[p2])
                if r == '1-0':
                    players[p1] += d
                    players[p2] -= d
                elif r == '0-1':
                    players[p1] -= d
                    players[p2] += d
    except OSError as problem:
        exit(problem)
    return players


def swap(tuple_in):
    return tuple_in[1], tuple_in[0]


def main():
    players = read_players_csv(PLAYERS_FILENAME)
    players = update_scores(players, GAMES_FILENAME)
    for p, s in sorted(players.items(), key=swap, reverse=True):
        # print(f"{p:.<30}{s:>6.0f}")
        print(f"{p}: {round(s)}")


if __name__ == '__main__':
    main()
