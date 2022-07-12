# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

FILENAME = "20211201_song.txt"


def get_words(file_name):
    with open(file_name) as file:
        whole_file = file.read()
    words = whole_file.split()
    return words


def read_file(file_name):
    with open(file_name) as file:
        # whole_text = file.read()  # slurps the whole file into a single string
        # whole_text = file.readlines() # returns a list with all the lines as element
        # for line in file.readlines(): # terrible: I'm reading the whole file
        for line in file:  # correct: reading 1 line at a time
            line = line.rstrip('\n')
            print(f">>>{line}<<<")


def main():
    print(get_words(FILENAME))


main()
