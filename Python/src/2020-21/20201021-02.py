#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

for n in range(0, 20):
    if n < 13:
        actual_floor = n
    else:
        actual_floor = n - 1
    if n != 13:
        print(f"User push {n} -> actual floor is {actual_floor}")

print("That's all folks")
