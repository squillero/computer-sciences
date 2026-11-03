# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.


def binary_to_decimal(number):
    """Convert `number` from binary to decimal."""
    val = 0
    weight = 2 ** (len(number) - 1)
    for d in number:
        val = val + d * weight
        weight //= 2
    return val


def binary_to_decimal_v2(number):
    """Convert `number` from binary to decimal (v2)."""
    val = 0
    for p, d in enumerate(number):
        val = val + d * 2 ** (len(number) - p - 1)
    assert val == binary_to_decimal(number)
    return val


def binary_to_decimal_v3(number):
    """Convert `number` from binary to decimal (v3)."""
    val = 0
    for p, d in enumerate(reversed(number)):
        val = val + d * 2**p
    assert val == binary_to_decimal_v2(number)
    return val


def binary_to_decimal_v4(number):
    """Convert `number` from binary to decimal (v4)."""
    val = 0
    for d in number:
        val = val * 2 + d
    assert val == binary_to_decimal_v3(number)
    return val


def decimal_to_binary(number):
    """Convert `number` from decimal to binary."""
    binary = list()
    while number > 0:
        reminder = number % 2
        binary.insert(0, reminder)
        number //= 2
    return tuple(binary)


def decimal_to_binary_v2(number):
    """Convert `number` from decimal to binary (v2)."""
    binary = list()
    if number == 0:
        binary.append(number)
    else:
        while number > 0:
            reminder = number % 2
            binary.append(reminder)
            number //= 2
    return tuple(reversed(binary))


def decimal_to_binary_v3(number):
    """Convert `number` from decimal to binary (v3)."""
    binary = list()
    while number > 0 or not binary:
        reminder = number % 2
        binary.append(reminder)
        number //= 2
    return tuple(reversed(binary))


def main():
    print("Hello, I'm main")
    print(binary_to_decimal_v4((1, 0, 1)))
    print(binary_to_decimal_v4((1,)))
    print(binary_to_decimal_v4((1, 0, 1, 1, 0, 0, 1, 1, 0)))

    print(decimal_to_binary_v3(0))
    print(decimal_to_binary_v3(10))


main()
