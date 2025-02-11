# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

foo = list("Giovanni Adolfo Pietro Pio Squillero")

for c in foo:
    print(c)

# BAD IDEA
for i in range(len(foo)):
    print(i, foo[i])

# BETTER
for i, c in enumerate(foo):
    print(i, c)

for yes in enumerate(foo):
    print(yes)
