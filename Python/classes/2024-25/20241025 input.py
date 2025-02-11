# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

print("Tell me 10 positive integer")
numbers = list()

while len(numbers) < 10:
    num = int(input(''))

    if num < 0:
        print("D'ho!")
    else:
        numbers.append(num)

print(numbers)
