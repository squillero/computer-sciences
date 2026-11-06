# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

from encodings.punycode import T
from glob import glob


def count_words(filename):
    """Counting words in one file."""
    counter = dict()
    with open(filename, encoding="utf8") as file:
        raw_file = file.read()

    cooked_file = ""
    for c in raw_file:
        if c.isalnum():
            cooked_file += c.casefold()
        else:
            cooked_file += " "

    words = cooked_file.split()
    for w in words:
        if not w.isnumeric():
            counter[w] = counter.get(w, 0) + 1
    return counter


def key_extractor(item):
    return item[1], item[0]


def main():
    files = glob("../*/*.py")
    counter = dict()
    for f in files:
        d = count_words(f)
        for k, v in d.items():
            counter[k] = counter.get(k, 0) + v

    tokens = list(counter.items())
    tokens.sort(key=key_extractor, reverse=True)  # behavioral parametrization
    print(tokens[:20])


main()
