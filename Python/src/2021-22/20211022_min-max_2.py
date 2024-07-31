# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

min_ = max_ = None

completed = False
while not completed:
    user_input = input()
    if not user_input:
        completed = True
    else:
        val = int(user_input)
        if max_ is None or val > max_:
            max_ = val
        if min_ is None or val < min_:
            min_ = val

print(f"max={max_}; min={min_}")
