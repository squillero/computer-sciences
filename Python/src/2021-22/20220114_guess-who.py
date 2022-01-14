# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

from csv import DictReader
from pprint import pprint

FILENAME_CHARACTERS = '20220114_characters.txt'
FILENAME_QUESTIONS = '20220114_questions-1.txt'
#FILENAME_QUESTIONS = '20220114_questions-2.txt'


def read_characters(filename):
    characters = dict()
    try:
        with open(filename, newline='') as raw_data:
            for d in DictReader(raw_data, delimiter=';'):
                name = d['Name']
                del d['Name']
                characters[name] = d
    except OSError as problem:
        print(f"Yeuch: {problem}")
    return characters


def read_filter(filename):
    filter_ = dict()
    try:
        with open(filename) as data_in:
            for line in data_in:
                key, value = line.split('=')
                filter_[key.strip()] = value.strip()
    except OSError as problem:
        print(f"Yeuch: {problem}")

    return filter_


def filter_characters(characters, filter_):
    excluded = set()
    for f in filter_:
        for c in characters:
            if characters[c][f] != filter_[f]:
                excluded.add(c)
    result = dict()
    for c in characters:
        if c not in excluded:
            result[c] = characters[c]
    return result


def print_characters(characters):
    for name, characteristics in sorted(characters.items()):
        tmp = list()
        for c, v in sorted(characteristics.items()):
            tmp.append(f"{c}: {v}")
        print(f"{name} - {', '.join(tmp)}")


def main():
    characters = read_characters(FILENAME_CHARACTERS)
    filter_ = read_filter(FILENAME_QUESTIONS)
    result = filter_characters(characters, filter_)
    print_characters(result)


if __name__ == '__main__':
    main()
