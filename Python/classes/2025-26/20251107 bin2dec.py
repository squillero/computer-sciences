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

    # slice rules!
    tail = binary_number[-bits + 1 :]
    head = binary_number[-bits : -bits + 1]

    # optional argument
    value = int(tail, base=2)

    # msb
    if head == "1":
        value -= 2 ** (bits - 1)

    print(f"{head}|{tail} = {value:,}")


if __name__ == "__main__":
    main()
