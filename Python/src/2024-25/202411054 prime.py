# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

MAXIMUM_NUMBER = 10_000


def count_div(number):
    cnt = 0
    for n in range(1, number + 1):
        if number % n == 0:
            cnt += 1
    return cnt


def prime(number):
    return count_div(number) == 2


primes = list()
for n in range(MAXIMUM_NUMBER):
    if prime(n):
        primes.append(n)

# Look for "consecutive" prime, like 2-3 or 11-13
# take 1 jad's
cnt = 0
for i in range(len(primes) - 1):
    if primes[i + 1] - primes[i] <= 2:
        cnt += 1
        # print(f"{primes[i]} and {primes[i+1]}")
print(f"Found {cnt:,} consecutive primes between 2 and {MAXIMUM_NUMBER:,}!")
