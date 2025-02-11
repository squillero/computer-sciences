# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

def foo(x, y):
    x += 1
    y += 10


def main():
    x = 23
    y = 10
    foo(x, y)
    print(f"{x}-{y}")


main()
