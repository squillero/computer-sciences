# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

name = "Giovanni"

for n in name:
    print(n)

for i in range(len(name)):
    print(f"{i}: {name[i]} -- Terrible idea")

for gabriele, elena in enumerate(name):
    print(f"{gabriele}: {elena}")

for josh in range(ord('a'), ord('z') + 1):
    print(f"{josh} -> {chr(josh)}")
