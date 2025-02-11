# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

beatles = ['John', 'Paul', 'George', 'Ringo']

foo = ''
for b in beatles:
    foo = foo + b
print(foo)

foo = str.join('|', beatles)
print(foo)

separator = '+'
foo = str.join(separator, beatles)
foo = separator.join(beatles)
foo = '+'.join(beatles)
print(foo)

vowels = list()
for c in ''.join(beatles).casefold():
    if c in "aeiou":
        vowels.append(c)
print(f"Vowels in Beatles memebers: {', '.join(vowels)}")
print(f'Vowels in Beatles memebers: {", ".join(vowels)}')

