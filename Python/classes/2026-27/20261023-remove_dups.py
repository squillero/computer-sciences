# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

from random import randint

PROBLEM_SIZE = 10_000

original_numbers = list()
for n in range(PROBLEM_SIZE):
    original_numbers.append(randint(0, 9999))
# print(original_numbers)

# Andrea's algorithm
numbers = original_numbers[:]
for i1, n in enumerate(original_numbers):
    for i2 in range(i1 + 1, PROBLEM_SIZE):
        if n == numbers[i2]:
            numbers[i2] = None
solution = list()
for n in numbers:
    if n is not None:
        solution.append(n)
print(f"Original elements: {PROBLEM_SIZE:,} / without dups {len(solution):,}")

# Danys's algorithm (take 1)
numbers_sorted = sorted(original_numbers)
solution = [numbers_sorted[0]]
for i in range(1, PROBLEM_SIZE):
    if numbers_sorted[i] != numbers_sorted[i - 1]:
        solution.append(numbers_sorted[i])
print(f"Original elements: {PROBLEM_SIZE:,} / without dups {len(solution):,}")

# Danys's algorithm (take 2)
numbers_sorted = sorted(original_numbers)
solution = list()
for i in range(PROBLEM_SIZE):
    if numbers_sorted[i : i + 1] != numbers_sorted[i - 1 : i]:
        solution.append(numbers_sorted[i])
print(f"Original elements: {PROBLEM_SIZE:,} / without dups {len(solution):,}")

# Bora's algorithm
used_numbers = set()
solution = list()
for n in original_numbers:
    if n not in used_numbers:
        used_numbers.add(n)
        solution.append(n)
print(f"Original elements: {PROBLEM_SIZE:,} / without dups {len(solution):,}")

# Cheriel's algorithm
solution = list(set(original_numbers))
print(f"Original elements: {PROBLEM_SIZE:,} / without dups {len(solution):,}")
