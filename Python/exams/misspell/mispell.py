# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

ITALIAN_WORDS = 'parole_italiane.txt'


# boilerplate code
def read_list(file_name):
    words = list()
    try:
        with open(file_name) as fin:
            words = fin.read().split('\n')
    except OSError as problem:
        print(f"Problem reading {file_name}: {problem}")
    return words


# check letter by letter
def mispell(word1, word2):
    if len(word1) != len(word2):
        return False
    num_diff = 0
    for w1, w2 in zip(word1.upper(), word2.upper()):
        if w1 != w2:
            num_diff += 1
    return num_diff == 1


def main():
    names = read_list(input("Please, introduce the name of the file with the names:\n"))
    words = read_list(ITALIAN_WORDS)

    for n in names:
        mispelled = False
        print(f"\nName: {n}:")
        for w in words:
            if mispell(n, w):
                mispelled = True
                print(f"{w}")
        if not mispelled:
            print("WARNING: No similar words were found!!!")


# alternative: creates sets with both the letter and the position
# Martina -> { (0, M), (1, A), (2, R), (3, T), (4, I), (5, N), (6, A) }
# cartina -> { (0, C), (1, A), (2, R), (3, T), (4, I), (5, N), (6, A) }
# the symmetric difference of the two sets is { (0, M), (0, C) }
# len == 2, hence 1 letter is different
# nb: sets could be precalculated after reading the word list
def mispell_alt(word1, word2):
    set1 = set(enumerate(word1.upper()))
    set2 = set(enumerate(word2.upper()))
    return len(word1) == len(word2) and len(set1.symmetric_difference(set2)) == 2


# entry point
if __name__ == '__main__':
    main()
