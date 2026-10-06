# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import re
foo = list()
foo.append(42)  # What happen under the hood: list.append(foo, 42)

foo = [23, 10, 18, 5]
foo.sort()  # ie. list.sort(foo)
print(foo)

removed = foo.pop()
print(foo)
print(removed)

removed = foo.pop(0)
print(foo)
print(removed)

foo = [23, 10, 18, 5]
foo.sort(reverse=True)  # ie. list.sort(foo)
print(foo)

