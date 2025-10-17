# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# index = 0
# while index < 10:
#     ...
#     index += 1

for name in range(10):
    print(name)

for name in range(5, 10):
    print(name)

for name in range(10, 0, -2):
    print(name)

for num in range(0, 10):
    if num % 2 == 0:
        print(num, "is even")
    num = 99
