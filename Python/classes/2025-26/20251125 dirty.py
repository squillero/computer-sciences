# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

INPUT = '20251125 creep.txt'
OUTPUT = '20251125 creep - redacted.txt'
TABOO = 'creep'


def main():
    with open(INPUT) as input_file, open(OUTPUT, 'wt') as output_file:
        for line in input_file:
            output_file.write(line.replace(TABOO, '***'))


if __name__ == '__main__':
    main()
