# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def add_one(x):
    return x + 1


def main():
    data = [18, 5, 23, 10]
    print(list(range(10)))
    print(list(map(add_one, data)))


if __name__ == '__main__':
    main()
