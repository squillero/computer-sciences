# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    file = open("duck.txt", "r")
    line = file.readline()
    line = file.readline()
    while line != '':
        print(f"LINE: <<<{line[:-1]}>>>")
        line = file.readline()
    file = ""
    file.close()


if __name__ == '__main__':
    main()
