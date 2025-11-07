# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    number = int(input("Decimal number: "))

    print(f"D'ho: {number:b}")

    binary = list()
    while number > 0:
        r = number % 2
        binary.append(r)
        number = number // 2        # number //= 2

    for i in range(len(binary) - 1, -1, -1):
        print(binary[i], end='')
    print()

    for i in range(len(binary)):
        print(binary[-(i + 1)], end='')
    print()

    for d in reversed(binary):
        print(d, end='')
    print()

    for d in binary[::-1]:
        print(d, end='')
    print()


if __name__ == "__main__":
    main()
