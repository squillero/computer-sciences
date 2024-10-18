# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

colors = list()
colors.append("blue")
colors.append("red")
colors.append("magenta")

foo = colors
foo.append(42)

print(colors == foo)
print(colors is foo)

print(list("Giovanni"))
