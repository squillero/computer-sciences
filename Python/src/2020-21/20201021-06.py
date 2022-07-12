# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

str1 = input("First string : ")
str2 = input("Second string: ")

if str1 == str2:
    print("Hey, they are equal!")
else:
    # Hey! Not the best optiom
    if str1 < str2:
        print(f'"{str1}" is first')
        print(f'"{str2}" is last')
    else:
        print(f'"{str2}" is first')
        print(f'"{str1}" is last')

print("That's all folks...")
