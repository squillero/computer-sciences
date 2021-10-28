#  Copyright © 2020 Giovanni Squillero <squillero@polito.it>
#  Free for personal or classroom use; see 'LICENCE.md' for details.
#  https://github.com/squillero/computer-sciences

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
