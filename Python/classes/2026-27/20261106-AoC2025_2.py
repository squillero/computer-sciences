# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.


def is_valid(id):
    sid = str(id)
    return sid[: len(sid) // 2] != sid[len(sid) // 2 :]


def main():
    print(is_valid(55))
    print(is_valid(51))
    print(is_valid(123123))
    print(is_valid(0))
    print(is_valid(1E100))


main()
