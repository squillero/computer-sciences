# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def hello():
    return 23, 10


def main():
    foo = (23, 10)  # tuple
    bar = [23, 10]  # list

    # magic
    birthday = 23, 10
    day, month = birthday

    a, b = hello()


if __name__ == "__main__":
    main()
