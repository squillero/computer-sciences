# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

FILENAME = "20261106-test.eess"


def read_file(filename):
    try:
        with open(filename, encoding="utf8") as foo:
            book = foo.read()
    except OSError as bob:
        print(f"We have a problem: {bob}")
        book = "<error>"
    return book


def main():
    """Standard entry point."""
    book = read_file(FILENAME)
    print(book)


main()
