# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint

MAIN_FILE = 'classes.txt'


def read_classes(filename):
    classes = list()
    try:
        with open(filename) as input_file:
            classes = input_file.read().split()
    except OSError:
        print("Yeuch")
    return classes


def read_class(students, class_):
    try:
        with open(f"{class_}.txt") as input_file:
            for line in input_file:
                s, v = line.split()
                if s not in students:
                    students[s] = dict()
                students[s][class_] = v
    except OSError:
        print("Yeuch")


def main():
    students = dict()
    classes = read_classes(MAIN_FILE)
    for c in classes:
        read_class(students, c)
        pprint(students)


if __name__ == '__main__':
    main()
