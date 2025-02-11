# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

counter = 0
completed = False
found = False

while not completed:
    user_input = input()
    if not user_input:
        completed = True
    else:
        if int(user_input) == 42:
            print("You got it!")
            completed = True
            found = True
        else:
            print("No")
