# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# string = input()
string = 'VanaTallinn'

for num_chars in range(1, len(string) + 1):
    for i1 in range(len(string) - num_chars + 1):
        for i2 in range(num_chars):
            print(string[i1 + i2], end='')
        print()
