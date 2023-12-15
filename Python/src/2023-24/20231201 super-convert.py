# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.


def main():
    bit_strings = input(": ")
    print(f"Assuming {len(bit_strings)} bits...")
    print(f"As pure binary: {bits_as_pure_binary(bit_strings)}")
    print(
        f"As twos complement: {bits_as_twos_complement(bit_strings)}"
    )
    print(f"As sign magnitude: {bits_as_sign_magnitude(bit_strings)}")
    print(
        f"As ones complement: {bits_as_ones_complement(bit_strings)}"
    )


def bits_as_pure_binary(bits):
    return int(bits, 2)


def bits_as_twos_complement(bits):
    """Hand-like conversion"""
    ruler = list()
    for d in range(len(bits)):
        ruler.append(2**d)
    ruler[-1] *= -1
    ruler.reverse()
    value = 0
    for digit, weight in zip(list(bits), ruler):
        value += int(digit) * weight
    return value


def bits_as_ones_complement(bits):
    if bits[0] == "0":
        return bits_as_pure_binary(bits)
    else:
        # smart math trick!
        pass


def bits_as_sign_magnitude(bits):
    value = int(bits[1:], 2)
    if bits[0] == "1":
        value = -value
    return value


if __name__ == "__main__":
    main()
