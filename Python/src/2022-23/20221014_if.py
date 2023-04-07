# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

name = input("What's your name? ")

# name = input("What's your name? ").upper()
#if name[-1] == 'a' or name[-1] == 'A':
if name[-1].upper() == 'A':
    print("Hello girl")
else:
    print("Hello boy")

for a in name:
    print("foo")
    print("bar")
    print(a * 10, "!!!!")
print("Yeuch")
