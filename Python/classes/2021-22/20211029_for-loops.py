# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

for i in range(100):
    print(i)

for i in range(100, -100, 10):
    print(f"Back: {i}")

for i in "range":
    print(f"Letter \"{i}\"")

del i
print(f"And now 'i' is \"{i}\"")
