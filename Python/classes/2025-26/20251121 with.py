# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = '20251118 song.txt'


def main():
    with open(FILENAME) as song:
        for num, line in enumerate(song):
            print(f"{num+1:2}: {line.rstrip()}")
    print("here")


if __name__ == '__main__':
    main()
