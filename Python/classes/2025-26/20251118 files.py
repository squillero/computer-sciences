# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    beatles = open('20251118 song.txt')
    # stones = open('20251118 song.txt')
    line1 = beatles.readline().rstrip()
    line2 = beatles.readline().rstrip()
    print(line1)
    print(line2)
    beatles.close()
    line3 = beatles.readline().rstrip()
    print(line3)


if __name__ == '__main__':
    main()
