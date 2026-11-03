# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

FILE_NAME = "20261103-song.mnns"


def main():
    try:
        # The "correct" way (small/specific)
        with open(FILE_NAME) as file_handler:
            # The "correct" way (no explicit close)
            content = file_handler.read()
    except OSError:
        print("Yeuch!")
        exit()
    print(content)


main()
