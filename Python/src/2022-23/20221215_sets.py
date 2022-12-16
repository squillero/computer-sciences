# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint


def print_set(set_):
    for n, e in enumerate(set_):
        print(f"{n:2}: {e}")


def main():
    numbers = set()

    not_over = True
    while not_over:
        x = int(input("Num: "))
        if x in numbers:
            print("Yeah!")
            not_over = False
        numbers.add(x)
        print_set(numbers)


if __name__ == '__main__':
    main()
