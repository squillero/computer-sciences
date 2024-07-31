# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

print("Enter max")

sum_ = 0  # standard way for NOT shadowing a common name (or using a reserved keyword)
num = 0

flag_even = False  # that's a flag
finished = False  # usual boolean variable

while not finished:
    number = int(input(":"))
    if number < 0:
        finished = True
    else:
        if number % 2 == 0:
            flag_even = True  # flag gets true

if flag_even:
    print("Found at least one even number!")
