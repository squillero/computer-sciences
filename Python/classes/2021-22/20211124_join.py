# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    the_beatles = ['John', 'Paul', 'George', 'Ringo']

    string = the_beatles[0]
    for name in the_beatles[1:-1]:
        string += ', ' + name
    string += ', and ' + the_beatles[-1]  # add Oxford comma!

    print(f">>>>{string}<<<<")
    print(f">>>>{', '.join(the_beatles)}<<<<")


main()
