# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from string import punctuation

FILENAME = "20231114 strawberry.py"


def read_file(filename):
    with open(filename) as data_in:
        content = data_in.read()

    # take 1
    clean_text = list()
    for c in content:
        if c.isalpha():
            clean_text.append(c)
        else:
            clean_text.append(" ")
    content = "".join(clean_text)

    # take 2
    for symbol in punctuation:
        content = content.replace(symbol, " ")

    return content.upper().split()


def main():
    words = read_file(FILENAME)

    # take 1
    for i in range(len(words) - 2):
        if len(words[i]) == len(words[i + 1]) and len(
            words[i + 1]
        ) == len(words[i + 2]):
            print(words[i : i + 3])

    # take 2
    for w1, w2, w3 in zip(words, words[1:], words[2:]):
        if len(w1) == len(w2) and len(w2) == len(w3):
            print((w1, w2, w3))


if __name__ == "__main__":
    main()
