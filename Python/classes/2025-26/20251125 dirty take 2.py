# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

INPUT = '20251125 creep.txt'
OUTPUT = '20251125 creep - redacted.txt'
TABOO = {'creep', 'hell'}


def main():
    with open(INPUT) as input_file, open(OUTPUT, 'wt') as output_file:
        for line in input_file:
            if not set(line.split()) & TABOO:
                output_file.write(line)


if __name__ == '__main__':
    main()
