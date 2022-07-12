# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

VOWELS = "AEIOU"

# string = input()
string = 'VanaTallinn'

# Take 1
string2 = ''
for char in string:
    if char.upper() not in VOWELS:
        string2 += char
    else:
        print(f"{char} is a vowel!")
        string2 += '_'
print(f"{string} -> {string2}")

# Take2
string2 = string
for vowel in VOWELS:
    string2 = string2.replace(vowel.lower(), '_')
    string2 = string2.replace(vowel.upper(), '_')
print(f"{string} -> {string2}")
