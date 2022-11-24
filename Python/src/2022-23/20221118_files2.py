# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

FILENAME = 'song.txt'


def main():
    with open(FILENAME) as my_file:
        # whole_files = my_file.read()
        # whole_file_in_lines = list(my_file.readlines())
        for line in my_file:
            print(line)
            #print(line[:-1])



if __name__ == '__main__':
    main()
