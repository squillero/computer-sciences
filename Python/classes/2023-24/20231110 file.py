# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

with open("20231110 loving.txt") as song:
    for line in song.readlines():
        line = line.rstrip()
        print(line)

with open("20231110 loving.txt") as song:
    lyrics_line_by_line = list(song.readlines())

with open("20231110 loving.txt") as song:
    raw_lyrics = song.read()
