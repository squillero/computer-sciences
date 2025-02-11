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
    except OSError as problem:
        exit(problem)
    return rules


def string_to_list(text):
    """convert string "x,y,z\n" to list of int [x, y, z]"""
    seq = list()
    for w in text.split(','):
        seq.append(int(w))
    return seq


def main():
    rules = read_rules(RULES_FILENAME)
    try:
        with open(UPDATES_FILENAME) as file:
            for line in file:
                seq = string_to_list(line)
                correct_flag = True
                for n1, n2 in rules:
                    if n1 in seq and n2 in seq and seq.index(n1) > seq.index(n2):
                        correct_flag = False
                if correct_flag:
                    print(f"Line: {seq} is ok")
                else:
                    print(f"Line: {seq} is NOT ok")

    except OSError:
        exit("Aaaaaaaararggghghggg!")


if __name__ == '__main__':
    main()
