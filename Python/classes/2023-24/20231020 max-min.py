# Copyright © 2023 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

max_ = None
min_ = None
user = input("Number (enter to exit): ")
while user:
    number = int(user)
    if max_ is None or number > max_:
        max_ = number
    if min_ is None or number < min_:
        min_ = number
    user = input("Number (enter to exit): ")

print(f"Minimum: {min_}, maximum: {max_}")
