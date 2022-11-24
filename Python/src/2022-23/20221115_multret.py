# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.


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
