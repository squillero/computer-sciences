# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

container = ("Giovanni", (23, 10), "Paola", (18, 5))

for foo in container:
    print(f'foo is now "{foo}"')

for letter in "áéíóúñüç케이팝":
    print(f'"{letter}" that is Unicode Point {ord(letter)}')
