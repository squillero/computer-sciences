# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# +---+
# |BOB|
# +---+

name = input("What is your name? ")
name = name.upper()
# brave? name = input("What is your name? ").upper()

print("+" + "-" * (len(name) + 2) + "|")
print("| " + name + " |")
print("+" + "-" * (len(name) + 2) + "|")
