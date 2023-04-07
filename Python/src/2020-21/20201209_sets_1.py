# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

FILE_NAME = 'heaven.txt'


def main():
    words = set()
    with open(FILE_NAME, 'r') as song:
        for line in song:
            for w in line.split():
                stripped_word = w.upper().strip('!?,.\'"')
                words.add(stripped_word)
    print(sorted(words))
    print(f"Found {len(words):,} unique words")


if __name__ == '__main__':
    main()
