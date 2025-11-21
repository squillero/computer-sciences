# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILE_IN = '20251118 song.txt'
FILE_OU = 'output.txt'


def read_file(filename):
    try:
        with open(filename) as data:
            return data.read().split('\n')
    except OSError as problem:
        exit(str(problem))


def main():
    for line in read_file(FILE_IN):
        new_line = list()
        for word in line.split():
            new_line.append(word[0].upper() + word[1:])
        print(" ".join(new_line))

    for line in read_file(FILE_IN):
        print(line.title())


if __name__ == '__main__':
    main()
