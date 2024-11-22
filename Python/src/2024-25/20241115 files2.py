# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = '20241115 song.txt'

def sing(song):
    try:
        with open(song) as lyrics:
            for line in lyrics:
                print(line.rstrip())
    except OSError as problem:
        exit(problem)
    print(None)


def main():
    sing(FILENAME)


if __name__ == '__main__':
    main()
