# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def foo():
    return 1, 2, 3, 4, 5


def main():
    _, _, this_one, _, _ = foo()
    print(this_one)


if __name__ == "__main__":
    main()
