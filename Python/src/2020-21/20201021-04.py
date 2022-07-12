# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

name = input("What is your name? ")

if len(name) > 20:
    print(f'Oooooo, "{name}" is really a long name...')

n = int(input(f"{name}, tell me a number: "))
print(n + 42)
