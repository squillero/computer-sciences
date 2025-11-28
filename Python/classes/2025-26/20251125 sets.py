# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    foo = set()
    foo.add(23)
    foo.add(10)
    foo.add(18)
    foo.add(5)
    print(foo)
    foo.add(18)
    foo.add(5)
    print(foo)


if __name__ == '__main__':
    main()
