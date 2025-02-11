# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic


def dec2base(number, base):
    digits = list()
    while number > 0:
        digits.append(number % base)
        number //= base
    # return list(reversed(digits))
    if not digits:
        digits = [0]
    return digits[::-1]


def base2dec_1(number, base):
    num = 0
    for p, d in enumerate(number):
        num += d * (base ** (len(number) - p - 1))
    return num


def base2dec_2(number, base):
    num = 0
    weight = 1
    for p, d in enumerate(reversed(number)):
        num += d * weight
        weight *= base
    return num


def base2dec(number, base):
    num = 0
    for n in number:
        num = num * base + n
    return num


def main():
    ic(dec2base(23, 2))
    ic(dec2base(23, 10))
    ic(dec2base(0, 2))
    ic(base2dec([2, 3], 10))


if __name__ == '__main__':
    main()
