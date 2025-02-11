# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    x = "Giovanni"
    foo(x)
    # 'x' still bound to "Giovanni"
    print(x)


def foo(y):
    # despite the +=, the object bound to 'y' can't change (strings are immutable)
    # thus, the += creates a new string and binds the local 'y' to it
    y += "Adolfo"


if __name__ == '__main__':
    main()
