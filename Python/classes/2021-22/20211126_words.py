# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILE_NAME = '20211126_stairway.txt'


def main():
    with open(FILE_NAME) as song:
        for num, line in enumerate(song):
            print(f"{num+1:02d}: {line.split()}")


main()
