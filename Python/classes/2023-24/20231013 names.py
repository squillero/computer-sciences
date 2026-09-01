# Copyright © 2023 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

name = input("Name: ")

if len(name) > 20:
    print("Whoa! A LONG name...")

length = len(name)
print(name[length - 1])
if name[length - 1] == "a":
    print("Ms.", name)
else:
    print("Mr.", name)
