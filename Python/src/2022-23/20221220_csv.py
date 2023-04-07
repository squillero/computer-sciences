# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint
import csv

FILENAME = 'test.csv'


def read_file_csv_dict(filename):
    data = dict()
    try:
        with open(filename, encoding='utf8') as raw_file:
            for d in csv.DictReader(raw_file):
                data[d['LANGUAGE']] = d['GREET']
    except OSError as error:
        print(f"Yeuch: {error}")
    return data


def read_file_csv(filename):
    data = dict()
    try:
        with open(filename, encoding='utf8') as raw_file:
            for lang, greet in csv.reader(raw_file):
                data[lang] = greet
    except OSError as error:
        print(f"Yeuch: {error}")
    return data


def read_file(filename):
    data = dict()
    try:
        with open(filename, encoding='utf8') as file_in:
            for line in file_in:
                lang, greet = line.split(',', maxsplit=1)
                data[lang] = greet[1:-1]
    except OSError as error:
        print(f"Yeuch: {error}")
    return data


def main():
    data = read_file_csv_dict(FILENAME)
    for lang, greet in data.items():
        print(f"In {lang} we say \"{greet}\"")


if __name__ == '__main__':
    main()
