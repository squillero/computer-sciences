#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/

max_num = int(input("Max num: "))
div = int(input("Num: "))

n = 0
count = 0
while n <= max_num:
    if n % div == 0:
        print(f"{n} can be divided by {div}")
        count = count + 1
    n = n + 1
else:
    print(f"Found {count} numbers")
