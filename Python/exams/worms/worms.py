# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computational-intelligence
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint

SEQUENCES_FILE = 'seq.txt'


def find_all(word, sequence):
    indexes = list()
    for i, w in enumerate(sequence):
        if w == word:
            indexes.append(i)
    # ie. indexes = [i for i, w in enumerate(sequence) if w == word]
    return indexes


def read_sequences(filename):
    sequences = list()
    try:
        with open(filename) as input_file:
            for seq in input_file:
                sequences.append(seq.split())
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(problem)
    return sequences


def main():
    sequences = read_sequences(SEQUENCES_FILE)
    word1 = input('Enter the first word: ')
    word2 = input('Enter the second word: ')

    min_distance = 0
    sequence_with_min_distance = None
    for i, seq in enumerate(sequences):
        for p0 in find_all(word1, seq):
            # Note: calculating find_all(word2, seq) only once before
            # the for loop would have been somewhat faster
            for p1 in find_all(word2, seq):
                # this code is never executed unless both words are in seq ;-)
                if sequence_with_min_distance is None or abs(p0 - p1) < min_distance:
                    sequence_with_min_distance = i
                    min_distance = abs(p0 - p1)

    if sequence_with_min_distance is not None:
        print(f"Min distance: sequence {sequence_with_min_distance+1} (distance={min_distance})")
    else:
        print("The two words never appear in the same sequence")


if __name__ == '__main__':
    main()