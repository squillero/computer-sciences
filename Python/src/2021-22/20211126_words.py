# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

FILE_NAME = '20211126_stairway.txt'


def main():
    with open(FILE_NAME) as song:
        for num, line in enumerate(song):
            print(f"{num+1:02d}: {line.split()}")


main()
