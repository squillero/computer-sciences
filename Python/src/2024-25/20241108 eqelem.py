# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic


def same_elements(seq1, seq2):
    """Checks if seq1 and seq2 have the same elements"""
    seq2 = seq2[:]  # shallow copy -- also: seq2 = copy(seq1)
    flag = len(seq1) == len(seq2)
    for e1 in seq1:
        for i, e2 in enumerate(seq2):
            if e1 == e2:
                seq2[i] = None
                break
        else:
            flag = False
    return flag


def same_elements_cheating(seq1, seq2):
    """Cool"""
    return sorted(seq1) == sorted(seq2)


ic(same_elements([23, 10, 18, 5], [18, 5, 23, 10]))
ic(same_elements([1, 2, 3], [1, 2, 2, 3, 3]))
ic(same_elements([1, 2, 2], [1, 1, 2]))

a = [1, 2, 3]
b = [3, 2, 1]
ic(same_elements(a, b))
ic(a, b)
