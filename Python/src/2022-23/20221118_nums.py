# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

FILENAME = 'numbers.dat'


def main():
    with open(FILENAME) as file_in:
        big_sum = 0
        for x in file_in:
            big_sum += int(x)
    print(f"Sum is {big_sum:,}")

    numbers = list()
    with open(FILENAME) as file_in:
        for x in file_in:
            numbers.append(int(x))
    print(f"Sum is {sum(numbers):,}")

    numbers2 = list()
    with open(FILENAME) as file_in:
        for n in file_in.read().split():
            numbers2.append(int(n))
    print(f"Sum is {sum(numbers2):,}")


if __name__ == '__main__':
    main()
