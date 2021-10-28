#  Copyright © 2020 Giovanni Squillero <squillero@polito.it>
#  Free for personal or classroom use; see 'LICENCE.md' for details.
#  https://github.com/squillero/computer-sciences

max_num = int(input("Max num: "))
div = int(input("Num: "))

n = 0
count = 0
while n <= max_num:
    if n % div == 0:
        print(f"{n} can be divided by {div}")
        count = count + 1
    n = n + 1
else:
    print(f"Found {count} numbers")
