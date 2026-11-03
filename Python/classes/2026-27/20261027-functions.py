# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

def david(count):
    print("Hello, I'm David")
    print(list(range(count, -1, -1)))
    return -count

foo = david(10)
print(foo)
