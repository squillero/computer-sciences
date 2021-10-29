# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

# string = input()
string = 'VanaTallinn'

x = list()
for num_chars in range(1, len(string) + 1):
    for i1 in range(len(string) - num_chars + 1):
        x.append(string[i1:i1 + num_chars + 1])
print("\n".join(sorted(x)))
