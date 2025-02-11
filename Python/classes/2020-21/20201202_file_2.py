# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = 'snow.x'


def main():
    input_file = open(FILENAME, 'r')
    for line in input_file:
        for word in line.split():
            trimmed_word = word.strip('.,!?\'"')
            print(f">>{trimmed_word}<<")
    input_file.close()


if __name__ == '__main__':
    main()
