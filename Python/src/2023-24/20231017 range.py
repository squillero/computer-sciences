# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

print("FIRST RANGE")
for num in range(5):
    print(num)

print("START-END")
for num in range(3, 5):     # ALL ranges are half-open ie. [3, 5)
    print(num)

print("START-END-STEP")
for num in range(3, 45, 7):
    print(num)

print("BACKWARD")
for num in range(10, 0, -1):
    print(num)
print("BOOOOOOM!")
