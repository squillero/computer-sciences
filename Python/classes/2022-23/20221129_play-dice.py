# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import random
from pprint import pprint

NUM_RANDOM_ROLLS = 10


def count_beginning(lst):
    """Count repetitions in the beginning of a list"""
    cnt = 0
    while cnt < len(lst) and lst[0] == lst[cnt]:
        cnt += 1
    return cnt


def myprint(lst):
    out = ""
    for e in lst:
        out += f"{e} "
    print(out, end='')


def main():
    rolls = list()
    for _ in range(NUM_RANDOM_ROLLS):
        rolls.append(random.randint(1, 6))
    pprint(rolls)
    reps = list()
    for start in range(NUM_RANDOM_ROLLS):
        reps.append((start, count_beginning(rolls[start:])))
    pprint(reps)

    max_ = [reps.pop(0)]
    for r in reps:
        if r[1] > max_[0][1]:
            max_ = [r]
        elif r[1] == max_[0][1]:
            max_.append(r)
    pprint(max_)

    pos = 0
    for rep_index, rep_length in max_:
        myprint(rolls[pos:rep_index])
        print("(", end=' ')
        myprint(rolls[rep_index:rep_index + rep_length])
        print(")", end=' ')
        pos = rep_index + rep_length
    myprint(rolls[pos:])


if __name__ == '__main__':
    main()
