# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint
from csv import DictReader

PLAYERS = 'players_short.csv'
GAMES = 'games_short.csv'
#PLAYERS = 'players.csv'
#GAMES = 'games.csv'


def read_players(filename):
    """Read players list from CSV"""
    players = dict()
    try:
        with open(filename, newline='') as raw_input:
            for row in DictReader(raw_input):
                players[row['PLAYER']] = int(row['SELO'])
    except OSError as problem:
        print(f"Yeuch: {problem}")
    return players


def delta(winner, loser):
    """Helper function"""
    return 1 / (1 + 2**((winner - loser) / 100))


def elo_win(winner, loser):
    """Update selo for players"""
    d = delta(winner, loser)
    winner += 200 * d
    loser -= 200 * d
    print(200 * d)
    return round(winner), round(loser)


def update_elo(db, name1, name2, result):
    """Update selo"""
    if result == '1-0':
        db[name1], db[name2] = elo_win(db[name1], db[name2])
    elif result == '0-1':
        db[name2], db[name1] = elo_win(db[name2], db[name1])


def main():
    """Standard entry point"""
    players = read_players(PLAYERS)

    try:
        with open(GAMES, newline='') as raw_input:
            for row in DictReader(raw_input):
                if row['PLAYER A'] not in players:
                    players[row['PLAYER A']] = 1500
                if row['PLAYER B'] not in players:
                    players[row['PLAYER B']] = 1500
                update_elo(players, row['PLAYER A'], row['PLAYER B'], row['RESULT'])
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(1)

    for p in sorted(players, key=lambda p: players[p], reverse=True):
        print(f"{p}: {players[p]}")


# Bolier plate code
if __name__ == '__main__':
    main()
