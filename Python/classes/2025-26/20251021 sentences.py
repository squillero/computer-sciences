# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

sentence = input("Sentence: ")

num_uppercase = 0
num_characters = 0
for i in range(len(sentence)):
    rune = sentence[i]
    if rune.isupper():
        num_uppercase += 1
    # if not rune.isspace():
    #     num_characters += 1
    if rune.isalpha():
        num_characters += 1

# print(f"Percentage of uppercase: {num_uppercase/num_characters*100:.2f}%")
print(f"Percentage of uppercase: {num_uppercase/num_characters:.2%}")
