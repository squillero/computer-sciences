# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import csv
from icecream import ic

CSV_FILE = '20241217 friend.csv'


def read_csv(filename):
    r"""Reading friends from a csv file"""
    friends = list()
    try:
        with open(filename, newline='') as file:
            for record in csv.DictReader(file):
                friends.append(record)
    except OSError as problem:
        exit(problem)
    return friends


def read_text(filename):
    r"""Reading friends from a plain text file"""
    friends = list()
    try:
        with open(filename) as file:
            file.readline()
            for line in file:
                record = dict()
                ic(line.rstrip().split(','))
                name, surname, email, food, movie = line.rstrip().split(',')
                record['NAME'] = name
                record['SURNAME'] = surname
                record['EMAIL'] = email
                record['FOOD'] = food
                record['MOVIE'] = movie
                friends.append(record)
    except OSError as problem:
        exit(problem)
    return friends


def main():
    r"""Standard entry point"""
    # read_text(CSV_FILE)
    read_csv(CSV_FILE)


if __name__ == '__main__':
    main()
