# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

foo = {1, 2, 4, 6, 7, 8, 9, 23, 777, -2}
print(sorted(foo))
print(sorted(foo, reverse=True))

foo = {"giovanni", "adolfo", "Pio", "Pietro"}
print(sorted(foo))
print(sorted(foo, key=lambda e: e.casefold()))
