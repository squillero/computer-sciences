# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

name = "Giovanni"
surname = "Squillero"

# Concat
full_name = name + ' ' + surname

# Take one letter
print(name[0])
print(name[2])
print(name[-1])

# Take range
print(name[1:-2])  # Always half-closed -> [, )
print(name[1:-1])
print(name[0:-1])
print(name[:-1])
print(name[1:])
print(name[:])

print("ABBA"[1:3])
