# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

PLAYERS_FILE = '20241126 players.csv'


def open_csv(filename):
    try:
        with open(filename) as fin:
            lines = fin.readlines()
    except OSError:
        lines = list()
    return lines


def main():
    players = open_csv(PLAYERS_FILE)
    print(players)


if __name__ == '__main__':
    main()
