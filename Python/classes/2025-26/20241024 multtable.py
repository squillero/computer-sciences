# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

DIM = 12


def main():
    for row in range(1, DIM + 1):
        print("|", end="")
        for col in range(1, DIM + 1):
            print(f"{row*col:5d} |", end='')
        print()
        print("+------" * DIM, end='')
        print("+")


if __name__ == "__main__":
    main()
