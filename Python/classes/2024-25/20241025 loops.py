# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from random import randint

data = [randint(0, 10000) for _ in range(1000)]

target = 666

# BAD
solution = -1
for n in data:
    if solution == -1 or abs(solution - target) > abs(n - target):
        solution = n
print(f"The closest to {target} is {solution}")

# GENERAL
solution = data[0]  # reasonable initialization
for n in data:
    if abs(solution - target) > abs(n - target):
        solution = n
print(f"The closest to {target} is {solution}")

# PYTHONIC
solution = None
for n in data:
    if solution is None or abs(solution - target) > abs(n - target):
        solution = n
print(f"The closest to {target} is {solution}")

# SUM
print(f"The sum is {sum(data):,} (cheating)")
total = 0
for n in data:
    total += n
print(f"The sum is {total:,}")

# COUNT MATCHES
matches = 0
for n in data:
    if 100 < n < 200:
        matches += 1
print(f"Found {matches} numbers between 100 and 200")

# MAX DIFF
max_i = 0
max_diff = abs(data[0] - data[1])
for i in range(len(data) - 1):
    diff = abs(data[i] - data[i + 1])
    if diff > max_diff:
        max_i = i
        max_diff = diff
print(f"Max distance: {data[max_i]}-{data[max_i+1]} (max diff is {max_diff:,})")
