# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

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
