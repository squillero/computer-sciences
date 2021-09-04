#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/

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
