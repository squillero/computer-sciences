# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

FILENAME = 'song.txt'


def main():
    # ;-)
    with open(FILENAME) as song:
        for index, line in enumerate(song):
            if index == 4:
                print(line.strip())

    with open(FILENAME) as song:
        whole_file = song.read()
    lines = whole_file.split('\n')
    print(lines[4])

    # ;-)
    with open(FILENAME) as song:
        lines = song.readlines()
    print(lines[4].strip())

    with open(FILENAME) as song:
        lines = list(song)
    print(lines[4].strip())


if __name__ == '__main__':
    main()
