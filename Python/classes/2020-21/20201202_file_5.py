# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = 'heaven.txt'


def main():
    with open(FILENAME, 'r') as input_file:
        for line in input_file:
            for word in line.split():
                trimmed_word = word.strip('.,!?\'"')
                print(f">>{trimmed_word}<<")


if __name__ == '__main__':
    main()
