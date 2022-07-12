# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

import sys
from string import ascii_lowercase

FILENAME = '===song.txt'
OUTPUT = 'jp.txt'


def cook(raw):
    cooked = raw.lower()
    cooked = cooked.strip(' \n"\'+-,.?!')
    return cooked


def main():
    words = list()
    try:
        with open(FILENAME) as input_file:
            for line in input_file:
                for raw_word in line.split():
                    words.append(cook(raw_word))
    except OSError as error:
        print(f"Yeuch, we had a problem with {FILENAME}: {error}")
        sys.exit(10)

    words_dict = dict()
    for letter in ascii_lowercase:
        words_dict[letter] = set()

    for word in words:
        for letter in word:
            words_dict[letter].add(word)

    try:
        with open(OUTPUT, 'w') as output_file:
            for letter in ascii_lowercase:
                if words_dict[letter]:
                    output_file.write(f"Words containing '{letter}':\n")
                    for word in sorted(words_dict[letter]):
                        output_file.write(f"\t{word}\n")
                    output_file.write(f"\n")
    except OSError as error:
        print(f"Yeuch, we had a problem with {OUTPUT}: {error}")
        sys.exit(10)


if __name__ == '__main__':
    main()
