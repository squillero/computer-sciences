#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/

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
