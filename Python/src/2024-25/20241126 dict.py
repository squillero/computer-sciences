# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic

foo = dict()
foo[2310] = 'Giovanni'
foo[185] = 'Paola'
ic(foo)

bar = dict()
bar['Giovanni'] = (23, 10)
bar['Paola'] = (18, 5)
bar[18] = 'Uuuuuu'
bar[(1, 2, 3)] = [1, 2, 3, 4]
