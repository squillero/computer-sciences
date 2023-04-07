# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


def main():
    the_beatles = ['John', 'Paul', 'George', 'Ringo']

    string = the_beatles[0]
    for name in the_beatles[1:-1]:
        string += ', ' + name
    string += ', and ' + the_beatles[-1]  # add Oxford comma!

    print(f">>>>{string}<<<<")
    print(f">>>>{', '.join(the_beatles)}<<<<")


main()
