#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-science   |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/

value = float(input("Value: "))

if value >= 8:
    print("Most structures fall")
elif value >= 7:
    print("Many buildings destroyed")
elif value >= 6:
    print("Many buildings considerably damages, some collapse")
elif value >= 4.5:
    print("Damage to poorly constructed buildings")
else:
    print("No destruction of buildings")
