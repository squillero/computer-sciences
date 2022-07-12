# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

limit = int(input())

print(f"Prime number up to {limit}: ", end='')
for number in range(2, limit + 1):
    prime = True
    for n in range(2, number // 2):
        if number % n == 0:
            prime = False
    if prime:
        print(f"{number:,}", end=' ')
print()
