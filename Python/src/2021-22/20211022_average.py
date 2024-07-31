# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

sum_ = 0
count = 0
completed = False
while not completed:
    user_input = input("Number: ")
    if user_input:
        sum_ += int(user_input)
        count += 1
    else:
        completed = True

if count == 0:
    print(f"D'oh")
else:
    print(f"Average of {count} values: {sum_/count:.2f}")
