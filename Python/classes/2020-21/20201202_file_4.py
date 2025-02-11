# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = 'snow.x'


def main():
    input_file = open(FILENAME, 'r')
    whole_file = input_file.read()
    input_file.close()

    for line in whole_file.splitlines():
        print(f"Chunk: >>{line.rstrip()}<<")


if __name__ == '__main__':
    main()
