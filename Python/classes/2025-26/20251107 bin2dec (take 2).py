# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    binary_number = input("Binary: ")
    bits = input(f"Digits (default {len(binary_number)}): ")
    if not bits:  # ie. bits == ""
        bits = len(binary_number)
    else:
        bits = int(bits)

    padded_binary_number = "0" * (bits - len(binary_number)) + binary_number
    value = -int(padded_binary_number[0]) * 2 ** (bits - 1) + int(padded_binary_number[1:], base=2)

    print(f"{padded_binary_number[0]}|{padded_binary_number[1:]} = {value:,}")


if __name__ == "__main__":
    main()
