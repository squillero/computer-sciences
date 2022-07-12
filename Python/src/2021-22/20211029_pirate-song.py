# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

# string = input()
string = 'VanaTallinn'

for num_chars in range(1, len(string) + 1):
    for i1 in range(len(string) - num_chars + 1):
        for i2 in range(num_chars):
            print(string[i1 + i2], end='')
        print()
