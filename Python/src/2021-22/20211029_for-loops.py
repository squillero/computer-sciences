# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

for i in range(100):
    print(i)

for i in range(100, -100, 10):
    print(f"Back: {i}")

for i in "range":
    print(f"Letter \"{i}\"")

del i
print(f"And now 'i' is \"{i}\"")
