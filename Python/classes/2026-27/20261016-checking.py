# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

numbers = list()
while user := input("> "):
    numbers.append(int(user))

at_least_one_number_is_even = False  # it's a flag!
at_least_one_number_is_odd = False  # it's a flag!
for n in numbers:
    if n % 2 == 0:
        at_least_one_number_is_even = True
    else:
        at_least_one_number_is_odd = True

if at_least_one_number_is_even and not at_least_one_number_is_odd:
    print("All numbers are even!")
elif at_least_one_number_is_odd and not at_least_one_number_is_even:
    print("All numbers are odd!")
elif at_least_one_number_is_even and at_least_one_number_is_odd:
    print("Some odd and some even numbers.")
else:
    print("D'ho!?")
