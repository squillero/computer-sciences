# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

NUMBER = 1732817328

number = str(NUMBER)
total = 0
for digit in number:
    total = total + int(digit)
    # alternative: total = total + ord(digit) - ord("0")

print(f"The sum of all digits of {NUMBER} is {total}")
