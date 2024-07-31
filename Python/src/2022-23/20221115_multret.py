# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    _, x = foo()

    print(type(x), x)
    print(x[1])

    paola, giovanni = foo()
    print(type(paola), paola)
    print(type(giovanni), giovanni)


def foo():
    return 18, 23


if __name__ == '__main__':
    main()
