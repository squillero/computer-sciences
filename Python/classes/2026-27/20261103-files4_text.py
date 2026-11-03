# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

FILE_NAME = "20261103-song.mnns"


def main():
    try:
        with open(FILE_NAME) as file_handler:
            for n, line in enumerate(file_handler):
                line = line.rstrip()
                print(f'The line {n} is: "{line}"')
    except OSError:
        print("Yeuch!")
        exit()


main()
