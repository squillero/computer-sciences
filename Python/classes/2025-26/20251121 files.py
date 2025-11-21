# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

SONG_FILENAME = '20251118 song.txt'
NEWSONG_FILENAME = 'bralla.txt'


def main():
    song = open(SONG_FILENAME)
    # SECOND ARG:
    # - (t)ext* / (b)inary
    # - (r)ead* / (w)rite / (a)ppend
    whole_file = song.read()
    lines = whole_file.split('\n')
    print(lines)
    for num, line in enumerate(lines):
        print(f"{num+1:2}: {line}")
    song.close()


if __name__ == '__main__':
    main()
