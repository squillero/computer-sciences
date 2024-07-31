# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


import random

BATTLEFIELD_SIZE = (5, 20)
SHIP_SIZES = [2, 3]
BATTLEFIELD_SEA = '.'
BATTLEFIELD_SHIP = '#'
BATTLEFIELD_MISS = '@'
BATTLEFIELD_HIT = '*'


def position_ships(battlefield_size):
    """Creates 'table' for storing the battlefield of given size"""
    table = list()
    for i in range(battlefield_size[0]):
        row = [BATTLEFIELD_SEA] * battlefield_size[1]
        table.append(row)

    for ship in SHIP_SIZES:
        row = random.randint(0, battlefield_size[0]-1)
        column = random.randint(0, battlefield_size[1]-ship-1)
        # TODO: check overlapping
        for s in range(ship):
            table[row][column+s] = BATTLEFIELD_SHIP

    return table


def ships_left(battlefield):
    for r in battlefield:
        if BATTLEFIELD_SHIP in r:
            return True
    return False


def print_battlefield(battlefield):
    """Prints current battlefield

    Notez Bien: This is TERRIBLE!
    """
    print()
    for r in battlefield:
        for c in r:
            if c == BATTLEFIELD_SHIP:
                c = BATTLEFIELD_SEA
            print(f"{c}", end='')
        print()


def get_user_coordinates():
    """Gets user move

    Notez bien: no error checking yet
    """
    row = int(input('Row: '))
    column = int(input('Column: '))
    return row, column


def fire_missile(battlefield, coordinates):
    """Fires the missile and reports the result"""
    row, column = coordinates
    if battlefield[row][column] == BATTLEFIELD_SHIP:
        print(f"Whoa! Ship hit")
        battlefield[row][column] = BATTLEFIELD_HIT
    elif battlefield[row][column] == BATTLEFIELD_SEA:
        print(f"Yeuch! miss")
        battlefield[row][column] = BATTLEFIELD_MISS
    elif battlefield[row][column] == BATTLEFIELD_MISS:
        print(f"Yeuch! miss (again). You already fired there...")
    elif battlefield[row][column] == BATTLEFIELD_HIT:
        print(f"Yeuch! miss. But you already hit a ship there...")


def main():
    battlefield = position_ships(BATTLEFIELD_SIZE)
    print_battlefield(battlefield)
    while ships_left(battlefield):
        print_battlefield(battlefield)
        x, y = get_user_coordinates()
        fire_missile(battlefield, (x, y))
    pass


if __name__ == '__main__':
    main()
