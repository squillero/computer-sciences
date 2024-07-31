# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

name = input("What is your name? ")

if len(name) > 20:
    print(f'Oooooo, "{name}" is really a long name...')

n = int(input(f"{name}, tell me a number: "))
print(n + 42)
