# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

import sys

FILENAME = "20261106-file_o.txt"


def main():
    sys.stdout.write("Cheriel rocks!")
    try:
        with open(FILENAME, "w") as file:  # "a" for append
            file.write("Hello\n")
            file.write("How are you?\n")
            file.write("Tomorrow is Monday\n")
            file.write("The cat is under the table\n")
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(1)


main()
