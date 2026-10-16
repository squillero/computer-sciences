# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

data = list("Giovanni")

for x in enumerate(data):
    print(x)

for i, e in enumerate(data):  # unpacking
    data[i] = "*"  # it works, but it is a bad idea -- don't change what you are looping on
    print(f"Index: {i} / element: {e}")

print(data)
