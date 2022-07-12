# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

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
