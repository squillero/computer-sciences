# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

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
