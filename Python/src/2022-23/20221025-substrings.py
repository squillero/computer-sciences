# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

string = input('String: ')

for len_ in range(1, len(string)+1):
    for i in range(len(string)-len_+1):
        print(string[i:i+len_])

