# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

value = float(input("Value: "))

if value >= 8:
    print("Most structures fall")
if 8 > value >= 7:
    print("Many buildings destroyed")
if 7 > value >= 6:
    print("Many buildings considerably damages, some collapse")
if 6 > value >= 4.5:
    print("Damage to poorly constructed buildings")
if value < 4.5:
    print("No destruction of buildings")
