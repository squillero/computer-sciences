# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

# string = input()
string = "Giovanni Adolfo Pietro Pio"

# Take 1
for i in range(len(string), 0, -1):
    print(string[i - 1], end='')
print()

# Take 1, alt
for i in range(len(string) - 1, -1, -1):
    print(string[i], end='')
print()

# Take 2
for i in range(len(string)):
    print(string[len(string) - i - 1], end='')
print()

# Take 3
for i in range(len(string)):
    print(string[-i - 1], end='')
print()

# Take 4 -- not this class, sorry
print(string[::-1])
