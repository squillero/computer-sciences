# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def read_integer_sequence():
    sequence = list()
    word = None
    while word != "":
        word = input()
        try:
            sequence.append(int(word))
        except ValueError:
            pass
    return sequence


def main():
    print(read_integer_sequence())


if __name__ == "__main__":
    main()
