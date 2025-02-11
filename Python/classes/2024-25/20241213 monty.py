# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from random import randint, choice
from icecream import ic

GOAT = 'Goat'
TESLA = 'Tesla'
NUM_TRIES = 1_000_000


def random_init():
    doors = [GOAT] * 3
    doors[randint(0, len(doors) - 1)] = TESLA
    return doors


def main():
    stat1 = 0
    stat2 = 0

    for t in range(NUM_TRIES):
        doors = random_init()
        # ic(doors)

        player = randint(0, len(doors) - 1)
        # ic(player)

        won = doors[player] == TESLA
        stat1 += won

        tmp = list(range(len(doors)))
        tmp.remove(player)
        if doors.index(TESLA) in tmp:
            tmp.remove(doors.index(TESLA))
        monty = choice(tmp)
        # ic(monty)

        tmp = list(range(len(doors)))
        tmp.remove(monty)
        tmp.remove(player)
        player = tmp[0]
        # ic(player)

        won = doors[player] == TESLA
        stat2 += won

    print(f"Players won {stat1/NUM_TRIES:.0%} times if not swapping")
    print(f"Players won {stat2/NUM_TRIES:.0%} times if swapping")


if __name__ == '__main__':
    main()
