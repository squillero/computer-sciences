# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

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
