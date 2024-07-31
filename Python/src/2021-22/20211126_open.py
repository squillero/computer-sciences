# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    input_file = open('stairway.txt')
    foo = input_file.readline()
    print(f"My FIRST line from a file: \"{foo}\"")
    foo = input_file.readline()
    print(f"My SECOND line from a file: \"{foo}\"")


main()
