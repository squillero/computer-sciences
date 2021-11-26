# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences


def main():
    input_file = open('stairway.txt')
    foo = input_file.readline()
    print(f"My FIRST line from a file: \"{foo}\"")
    foo = input_file.readline()
    print(f"My SECOND line from a file: \"{foo}\"")


main()
