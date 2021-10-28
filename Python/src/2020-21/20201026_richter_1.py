#  Copyright © 2020 Giovanni Squillero <squillero@polito.it>
#  Free for personal or classroom use; see 'LICENCE.md' for details.
#  https://github.com/squillero/computer-sciences

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
