# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

FILE_NAME_OLD = '20211126_stairway.txt'
FILE_NAME = 'C:\\Users\\John Nefastis\\Documents\\C\\2018-19\\w04_12-for2\\w04_12-for2.c'


def main():
    with open(FILE_NAME) as song:
        for num, line in enumerate(song):
            print(f"{num+1:02d}: {line.rstrip()}")


main()
