#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

name = input("What is your name? ")

if len(name) > 20:
    print(f'Oooooo, "{name}" is really a long name...')

n = int(input(f"{name}, tell me a number: "))
print(n + 42)
