# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.


def digit_value(digit: str):
    if digit.isdigit():
        return ord(digit) - ord("0")
    else:
        return 10 + ord(digit.upper()) - ord("A")


def base_to_decimal(number, base):
    # return int(number, base)
    value = 0
    for digit in number:
        value = value * base + digit_value(digit)
    return value


def decimal_to_base(number, base):
    ...


def main():
    x = base_to_decimal("C1A0", 16)
    print(x)


if __name__ == "__main__":
    main()
