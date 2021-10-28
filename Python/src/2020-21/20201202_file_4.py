# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

FILENAME = 'snow.x'


def main():
    input_file = open(FILENAME, 'r')
    whole_file = input_file.read()
    input_file.close()

    for line in whole_file.splitlines():
        print(f"Chunk: >>{line.rstrip()}<<")


if __name__ == '__main__':
    main()
