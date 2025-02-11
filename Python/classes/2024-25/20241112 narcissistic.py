# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

MAX_NUM = 10_000


def narcissistic(num):
    """Checks if `num` is Narcissistic"""
    num_string = str(num)
    length = len(num_string)
    value = 0
    for c in num_string:
        value += int(c) ** length
    return value == num


def main():
    for n in range(10, MAX_NUM):
        if narcissistic(n):
            print(n)


# BOILERPLATE CODE
if __name__ == '__main__':
    main()
