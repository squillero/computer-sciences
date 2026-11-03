# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

FILE_NAME = "20261103-song.mnns"


def main():
    try:
        with open(FILE_NAME) as file_handler:
            line = file_handler.readline()
            # line = line[:-1] -- ok, but unsafe
            line = line.rstrip()
            print(f'The first line is: "{line}"')

            line = file_handler.readline()
            line = line.rstrip()
            print(f'The second line is: "{line}"')
    except OSError:
        print("Yeuch!")
        exit()


main()
