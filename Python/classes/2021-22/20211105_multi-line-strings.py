# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# Multi line string
BEATLES = """John
Paul
George
Ringo"""

BEATLES_ALT = "John\nPaul\nGeorge\nRingo"


def foo():
    """Docstring
    May span over multiple
    lines"""

    print(BEATLES)
    print(BEATLES_ALT)

    print("""foo
bar
baz
gargle
""")


foo()
