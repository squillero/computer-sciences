# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

FILE_A = '20211201_song.txt'
FILE_B = '20211201_input.txt'
FILE_C = '20211201_a+b.txt'


def main():
    with open(FILE_A) as file_a, open(FILE_B) as file_b, open(FILE_C, 'w') as file_c:
        a = file_a.read()
        b = file_b.read()
        file_c.write(a)
        file_c.write(b)


main()
