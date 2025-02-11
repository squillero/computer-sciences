# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import string

BOOK = '20241129 capital.txt'

STOPWORDS = [
    '',
    'a',
    'all',
    'these',
    'an',
    'and',
    'his',
    'other',
    'are',
    'as',
    'at',
    'be',
    'been',
    'but',
    'by',
    'for',
    'from',
    'had',
    'has',
    'have',
    'in',
    'into',
    'is',
    'it',
    'its',
    'more',
    'no',
    'not',
    'of',
    'on',
    'one',
    'only',
    'or',
    'that',
    'the',
    'their',
    'they',
    'this',
    'to',
    'was',
    'were',
    'which',
    'will',
    'with',
]


def word_count(filename):
    words = dict()
    try:
        with open(filename) as book:
            for line in book:
                for w in line.split():
                    cooked_w = w.strip(string.punctuation).casefold()
                    if cooked_w in STOPWORDS:
                        continue
                    words[cooked_w] = words.get(cooked_w, 0) + 1

    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(1)

    return words


def get_num(item):
    return item[1]


def main():
    counter = word_count(BOOK)
    print(len(counter))
    # all_words = sorted(counter.items(), key=get_num, reverse=True)
    # for w, c in all_words[:30]:
    #     print(f"{w:.<20}{c:5}")

    # function inside function that uses local variables
    def susie(w):
        return counter[w]

    all_words_sorted = sorted(counter.keys(), key=susie, reverse=True)
    for w in all_words_sorted[:30]:
        print(f"{w:.<20}{counter[w]:5}")


if __name__ == '__main__':
    main()
