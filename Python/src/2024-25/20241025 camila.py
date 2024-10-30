# Copyright © 2024 Camila & Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


from icecream import ic

entry = input("Enter a string: ")
print(f"The string entered is \"{entry}\"")

# Which one are UPPERcase?
for c in entry:
    if c.isupper():
        print(c, end=' ')
print()

# Which one are UPPERcase?(take 2)
uppercase_letters = list()
for c in entry:
    if c.isupper():
        uppercase_letters.append(c)
print(uppercase_letters)

# Even letters letters
silly = True
for c in entry:
    if silly:
        print(c, end=' ')
    silly = not silly
print()

# Even letters letters (take 2)
for i in range(0, len(entry), 2):
    print(entry[i], end=' ')
print()

# Even letters letters (take 3, for expert only!)
for c in entry[::2]:
    print(c, end=' ')
print()

# NO Vowels:
for c in entry:
    if c.casefold() in "aeiou":
        print('_', end='')
    else:
        print(c, end='')
print()

# Number of numbers
n_numeric = 0
for c in entry:
    if c.isnumeric():
        n_numeric = n_numeric + 1
print(f"Found {n_numeric} numeric values!")

for pos, rune in enumerate(entry):
    if rune.casefold() in "aeiou":
        print(f"Found vowel '{rune}' in position {pos+1}")
