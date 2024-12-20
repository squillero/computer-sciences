# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from csv import reader as csv_reader
from icecream import ic

BOWLING_FILE = '20241220 bowling.txt'


def read_data(filename):
    r"""Reads data and returs a dictionary (no csv)"""
    players = dict()
    try:
        with open(filename) as file:
            for line in file:
                data = line.rstrip().split(';')
                surname = data.pop(0)
                name = data.pop(0)
                scores = list()
                for t in data:
                    scores.append(int(t))
                players[(surname, name)] = scores
    except OSError as problem:
        print(f"YEUCH! {problem}")
        players = dict()
    return players


def read_data_expert(filename):
    r"""Pythonic version of `read_data`"""
    players = dict()
    try:
        with open(filename, newline='') as file:
            for surname, name, *scores in csv_reader(file, delimiter=';'):
                players[surname, name] = [int(s) for s in scores]
    except OSError as problem:
        print(f"YEUCH! {problem}")
        players = dict()
    return players


def players_with_most_frequent_score(data, score):
    top = list()
    top_count = -1
    for player, scores in data.items():
        num = scores.count(score)
        if num > top_count:
            top_count = num
            top = [player]
        elif num == top_count:
            top.append(player)
    return top


def get_key_from_element(element):
    return sum(element[1])


def main():
    r"""Standard entry point"""
    players_data = read_data(BOWLING_FILE)

    for player, scores in sorted(players_data.items(), key=get_key_from_element, reverse=True):
        print(f"{player[0]} {player[1]} {sum(scores)}")

    ic(players_with_most_frequent_score(players_data, 10))
    ic(players_with_most_frequent_score(players_data, 0))


if __name__ == '__main__':
    main()
