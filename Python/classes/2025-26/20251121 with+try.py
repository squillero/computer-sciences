# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = '20251118 song.txt'


def read_file(file_name):
    try:
        with open(file_name) as song:
            whole_file = song.read()
    except OSError as problem:
        # simpler: exit("Yeuch!")
        print(f"Yeuch: {problem}")
        whole_file = None
    return whole_file


def main():
    print(read_file(FILENAME))
    print(read_file('this file does not exist.txt'))


if __name__ == '__main__':
    main()
