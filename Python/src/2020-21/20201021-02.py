# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

for n in range(0, 20):
    if n < 13:
        actual_floor = n
    else:
        actual_floor = n - 1
    if n != 13:
        print(f"User push {n} -> actual floor is {actual_floor}")

print("That's all folks")
