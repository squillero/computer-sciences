# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = 'snow.x'
CHUNK_SIZE = 7


def main():
    input_file = open(FILENAME, 'r')
    chunk = input_file.read(CHUNK_SIZE)
    while chunk != '':
        print(f"Chunk: >>{chunk}<<")
        chunk = input_file.read(CHUNK_SIZE)
    input_file.close()


if __name__ == '__main__':
    main()
