# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

FILENAME = 'song.txt'

def main():
    my_file = open(FILENAME)
    x = my_file.read()
    print(x)
    my_file.close()



if __name__ == '__main__':
    main()
