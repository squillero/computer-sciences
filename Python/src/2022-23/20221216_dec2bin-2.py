# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def dec2bin(num):
    digits = list()
    while num > 0 or not digits:
        digits.append(str(num % 2))
        num = num // 2
    return ''.join(reversed(digits))


def main():
    try:
        number = int(input("Number: "))
    except ValueError as error:
        print(f"Yeuch! {error}")
        exit(1)
    binary = dec2bin(number)
    print(f"{number}|10 -> {binary}|2")


if __name__ == '__main__':
    main()
