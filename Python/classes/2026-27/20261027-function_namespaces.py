# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

# L(E)GB


def alice(foo):
    print(f"Hello! I'm Alice. foo is {foo}")


def bob(foo, bar):
    print(f"Hello! I'm Bob. foo is {foo} and bar is {bar}")
    alice(bar)


bob(23, 10)
