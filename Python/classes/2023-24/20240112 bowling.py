# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import csv
from pprint import pprint


BOWLING_SCORES = "20240112 bowling.csv"


def read_stat(filename):
    player_scores = dict()
    try:
        with open(filename) as bowling_input:
            for row in csv.reader(bowling_input, delimiter=";"):
                surname, name, *scores = row
                tmp = list()
                # for x in scores:
                #     tmp.append(int(x))
                # player_scores[(surname, name)] = tmp
                player_scores[(surname, name)] = [
                    int(s) for s in scores
                ]
    except OSError as problem:
        exit(problem)
    return player_scores


def main():
    player_scores = read_stat(BOWLING_SCORES)
    for name, scores in sorted(
        player_scores.items(), key=lambda e: sum(e[1]), reverse=True
    ):
        print(f"{name[0]} {name[1]} {sum(scores)}")

    for name in sorted(player_scores):
        # count = 0
        # for s in player_scores[name]:
        #    if s == 10:
        #        count += 1
        count = sum(s == 10 for s in player_scores[name])
        print(
            f"{name[1]} {name[0]} knocked down all the pins {count} times"
        )

    lebowski = max(
        player_scores,
        key=lambda n: sum(s == 10 for s in player_scores[n]),
    )
    print(lebowski)


if __name__ == "__main__":
    main()
