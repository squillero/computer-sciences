# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic

RULES_FILENAME = '20241210 rules.dat'
UPDATES_FILENAME = '20241210 updates.dat'


def read_rules(filename):
    rules = list()
    try:
        with open(filename) as file:
            for line in file:
                n1, n2 = line.strip().split('|')
                rules.append((int(n1), int(n2)))
    except OSError:
        exit("Yeuch!")
    return rules


def main():
    rules = read_rules(RULES_FILENAME)
    try:
        with open(UPDATES_FILENAME) as file:
            for line in file:
                seq = list()
                for token in line.split(','):
                    seq.append(int(token))
                ic(seq)
                for n1, n2 in rules:
                    if n1 in seq and n2 in seq:
                        if seq.index(n1) > seq.index(n2):
                            ic(n1, n2, seq)
                            exit()

    except OSError:
        exit("Aaaaaaaararggghghggg!")


if __name__ == '__main__':
    main()
