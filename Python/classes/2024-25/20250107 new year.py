# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    happy = 0

    for x in range(10):
        happy += x
    happy **= 2
    print(f'{happy=}')

    happy = 0
    for x in range(10):
        happy += x**3
    print(f'{happy=}')


if __name__ == '__main__':
    main()
