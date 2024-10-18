# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# Install from the terminal
# pip install -U icecream

from icecream import ic

foo = [1, 2, 3]
bar = foo
ic(foo, bar)
ic(foo == bar)
ic(foo is bar)

baz = [1, 2, 3]
ic(foo == baz)
ic(foo is baz)

variable = 32
ic(variable)
ic()
