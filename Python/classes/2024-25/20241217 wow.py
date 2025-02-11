# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic

FILENAME = '20241217 wow.txt'


def read_text(filename):
    text = list()
    try:
        with open(filename) as file:
            for line in file:
                text.append(line.rstrip().split())
    except OSError as problem:
        exit(problem)
    return text


def find_in_line(line, word):
    positions = list()
    for p, w in enumerate(line):
        if word == w:
            positions.append(p)
    return positions


def find_min_distance(pos1, pos2):
    min_dist = None
    for p1 in pos1:
        for p2 in pos2:
            dist = abs(p1 - p2)
            if min_dist is None or dist < min_dist:
                min_dist = dist
    return min_dist


def check_all(full_text, word1, word2):
    min_dist = None
    for line in full_text:
        p1 = find_in_line(line, word1)
        p2 = find_in_line(line, word2)
        dist = find_min_distance(p1, p2)
        if dist is None:
            continue
        if min_dist is None or dist < min_dist:
            min_dist = dist
    return min_dist


def main():
    text = read_text(FILENAME)
    w1 = input('Word 1:')
    w2 = input('Word 2:')
    d = check_all(text, w1, w2)
    print(f"Min distance: {d}")


if __name__ == '__main__':
    main()
