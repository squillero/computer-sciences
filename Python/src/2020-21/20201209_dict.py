# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

FILE_NAME = 'heaven.txt'


def main():
    words = dict()
    with open(FILE_NAME, 'r') as song:
        for line in song:
            for w in line.split():
                stripped_word = w.upper().strip('!?,.\'"')

                # TAKE 1 - EXPLICIT GET
                # num = words.get(stripped_word, 0)

                # TAKE 2 - SAY SORRY
                #try:
                #    num = words[stripped_word]
                #except KeyError:
                #    num = 0

                # TAKE 3 - ASK FOR PERMISSION
                if stripped_word in words:
                    num = words[stripped_word]
                else:
                    num = 0

                words[stripped_word] = num + 1

    for w in sorted(words):
        print(f"{w}: {words[w]:,}")
    print(f"Found {len(words):,} unique words")

    most_common_word = None
    most_common_cnt = 0
    for w, c in words.items():
        if c > most_common_cnt:
            most_common_word = w
            most_common_cnt = c
    print(f"The most common word is {most_common_word} ({most_common_cnt:,} times)")


if __name__ == '__main__':
    main()
