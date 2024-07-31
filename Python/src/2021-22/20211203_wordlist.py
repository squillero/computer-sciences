# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = '20211203_long-text.txt'


def get_words(filename):
    """Returns the list of words found in a file"""
    try:
        with open(filename) as input_:
            cooked_text = ''
            for c in input_.read():
                if c.isalnum():
                    cooked_text += c.casefold()
                else:
                    cooked_text += ' '
        word_list = cooked_text.split()
    except OSError as problem:
        print(f"Yeuch: {problem}")
        word_list = []
    return word_list


def examine(wordlist):
    common_word = None
    common_word_count = 0
    while wordlist:
        word = wordlist.pop(0)
        count = wordlist.count(word) + 1
        if count > common_word_count:
            common_word_count = count
            common_word = word
    print(f"Most common word: \"{common_word}\", reaped {common_word_count:,} times")


def main():
    word_list = get_words(FILENAME)
    examine(word_list)


if __name__ == '__main__':
    main()
