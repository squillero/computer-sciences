# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from random import randint
from math import log2


def nim_smart(marbles):
    return marbles-2**int(log2(marbles))+1


def nim_dumb(marbles):
    if marbles == 1:
        return 1
    else:
        return randint(1, marbles//2)


def main():
    marbles = randint(10, 100)
    print(marbles)

    if randint(0, 1) == 0:
        nim = nim_smart
    else:
        nim = nim_dumb

    player = randint(0, 1)
    while marbles > 0:
        print(f"{marbles} remaining")
        if player == 0:
            ply = nim(marbles)
        else:
            ply = int(input("Remove: "))
        print(f"Player {player} removes {ply} marbles")
        marbles = marbles - ply
        player = 1 - player
    print(f"Player {player} won!")


if __name__ == '__main__':
    main()
