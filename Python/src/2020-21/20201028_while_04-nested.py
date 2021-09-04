#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/

max_num = int(input("Max num: "))

cnt1 = 1
while cnt1 <= max_num:
    cnt2 = 1
    while cnt2 <= cnt1:
        print(f"{cnt1*cnt2:3d}", end="  |  ")
        cnt2 = cnt2 + 1
    print()
    cnt1 = cnt1 + 1
