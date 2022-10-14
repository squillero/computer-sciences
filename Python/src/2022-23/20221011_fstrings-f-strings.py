# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

foo = input("Hello!")

print(foo)

a = input("a: ")
print(f"a square is {a**2}")  # YEUCH!

a = int(input("a: "))
print(f"a square is {a**2}")

a = input("a: ")
a = int(a)
print(f"a square is {a**2}")

a = input("a: ")
print(f"a square is {int(a)**2}")
