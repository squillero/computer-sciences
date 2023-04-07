# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint
from csv import DictReader
import random

FILENAME = 'test.csv'


def read_csv(filename):
    info = list()
    try:
        with open(filename, encoding='utf8') as file_in:
            dict_reader = DictReader(file_in)
            for line in dict_reader:
                info.append(line)
    except OSError as problem:
        exit("Yeuch!")
    return info


def sample2():
    data = dict()
    for i in range(10):
        data[i] = random.random()
    pprint(data)
    print()

    def key_getter(k):
        return data[k]

    pprint(sorted(data.keys(), key=key_getter))


def sample3():
    data = dict()
    for i in range(10):
        data[i] = random.random()
    pprint(data.items())

    def key_extractor(element):
        return element[1]

    for k, v in sorted(data.items(), key=key_extractor):
        print(f"{k} -> {v}")


def main():
    sample3()
    exit()
    info = read_csv(FILENAME)
    pprint(info)
    print()

    def key_extractor(blob):
        return len(blob['GREET'])

    info.sort(key=key_extractor, reverse=True)
    pprint(info)


if __name__ == '__main__':
    main()
