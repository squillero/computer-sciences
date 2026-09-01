# Copyright © 2022 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = 'song.txt'


def main():
    my_file = open(FILENAME)
    x = my_file.read()
    print(x)
    my_file.close()


if __name__ == '__main__':
    main()
