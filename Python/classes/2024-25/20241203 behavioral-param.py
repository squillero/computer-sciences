# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic

GLOBAL_CONSTANT = "I'm a liar, I'm not a constant"


def main():
    price_list = {'milk': 2, 'bread': 0.78, 'eggs': 6, 'airplane': 3_000_000, 'book': 23}

    for i in sorted(price_list):
        print(f"{i:.<20}{price_list[i]:.>10}")

    print()

    # behvioral parametrization, oh yeah!
    for i, p in sorted(price_list.items(), key=swap):
        print(f"{i:.<20}{p:.>10}")


def swap(element):
    return (element[1], element[0])


def completely_different():
    ic(swap(23, 10))
    ic(swap)
    a = swap
    ic(a(23, 10))


if __name__ == '__main__':
    main()
