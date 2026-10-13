# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

value = int(input("Starting number: "))

print(f"The start value is: {value}")
while value > 0.0001:
    print(f"The value is now: {value}")
    value = value / 2
print(f"The end value is: {value}")
