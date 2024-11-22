# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

WORKING_DAYS = 5


def main():
    a = 23
    b = "\t23\n\n"
    c = 23.0
    print(str(a), str(b), str(c))
    print(repr(a), repr(b), repr(c))


if __name__ == '__main__':
    main()
