# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint

FILENAME = '20221216_phonebook.xyz'


def read_phonebook(filename):
    pb = dict()
    try:
        with open(filename) as input_file:
            for line in input_file:
                name, phone = line.rsplit(maxsplit=1)
                pb[name] = phone
    except OSError as error:
        print(f"Yeuch: {error}")
    return pb


def main():
    phonebook = read_phonebook(FILENAME)

    for k in phonebook:
        print(f"{k} => {phonebook[k]}")

    for k, v in phonebook.items():
        print(f"{k} => {v}")

    for k in phonebook.keys():
        print(f"{k}")

    for v in phonebook.values():
        print(f"{v}")


if __name__ == '__main__':
    main()
