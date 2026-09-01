# Copyright © 2022 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def bin2dec(binary):
    num = 0
    for d in binary:
        num = num * 2 + int(d)
    return num


def main():
    binary = input()
    print(bin2dec(binary))


if __name__ == "__main__":
    main()
