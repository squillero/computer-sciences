# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

FILENAME = '20211210_mind.txt'


def main():
    with open(FILENAME) as file:
        whole_text = file.read()
    # regex rocks!
    whole_text = whole_text.replace('"', ' ')
    whole_text = whole_text.replace('.', ' ')
    whole_text = whole_text.replace(',', ' ')
    whole_text = whole_text.replace('\'', ' ')
    unique_words = set(whole_text.casefold().split())
    print(f"There are {len(unique_words):,} unique words in \"{FILENAME}\"")
    print(unique_words)


if __name__ == '__main__':
    main()
