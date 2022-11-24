# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

FILENAME = 'test.dat'


def main():
    with open(FILENAME, "w") as my_file:
        my_file.write("Hello! This is my first file.\n")
        my_file.write("Hello! This is my first file.\n")



if __name__ == '__main__':
    main()
