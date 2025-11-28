# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import os

OUTPUT_FILE = 'out.gx'


def main():
    try:
        with open(OUTPUT_FILE, 'at') as output:
            output.write("Hello!\n")
            output.write("Hello!\n")
            output.write("Hello!\n")
    except OSError:
        print("Yeuch")
        exit("Panik")


if __name__ == '__main__':
    main()
