# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

num = int(input("Number: "))

if num == 0:
    print("Neutral")
elif num > 0:
    print("Positive")
else:
    print("Negative")

if num > 1_000_000:
    print("Ohhhhhh, that's big")
elif -10 > num > 10:
    print("small....")

if (num == 0 or num < 20) and num > 101:
    ...


if "Weird?":
    # bool("Weird?") -> True
    print("D'ho!?")
