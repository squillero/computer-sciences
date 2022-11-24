# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

FILENAME1 = 'file1.txt'
FILENAME2 = 'file2.txt'


def main():
    with open(FILENAME1) as f1, open(FILENAME2, 'w') as f2:
        for line in reversed(f1.readlines()):
            f2.write(line)


if __name__ == '__main__':
    main()
