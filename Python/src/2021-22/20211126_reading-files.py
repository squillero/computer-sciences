# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

FILE_NAME_OLD = 'stairway.txt'
FILE_NAME = 'C:\\Users\\John Nefastis\\Documents\\C\\2018-19\\w04_12-for2\\w04_12-for2.c'

def main():
    with open(FILE_NAME) as song:
        for num, line in enumerate(song):
            print(f"{num+1:02d}: {line.rstrip()}")


main()
