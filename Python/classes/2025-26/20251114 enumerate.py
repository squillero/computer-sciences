# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    name = "Giovanni Adolfo Pio Pietro".split()

    for index in range(len(name)):
        print(f"The element at position {index}")

    for element in name:
        print(f"The element is \"{element}\"")

    for index, element in enumerate(name):
        print(f"The element at position {index} is \"{element}\"")


if __name__ == "__main__":
    main()
