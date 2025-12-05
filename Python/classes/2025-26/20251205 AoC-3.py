# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

DATA_FILE = '20251205 AoC-3.data.txt'


def brute_force(bank):
    values = list()
    for c1 in range(len(bank) - 1):
        for c2 in range(c1 + 1, len(bank)):
            values.append(int(bank[c1] + bank[c2]))
    return max(values)


def max2(bank):
    m1 = max(bank[:-1])
    m2 = max(bank[bank.index(m1) + 1 :])
    return int(m1 + m2)  # nota sum, but a concat


def maxn(bank, n):
    result = ''

    for i in range(n):
        m = max(bank[: len(bank) - n + i + 1])
        bank = bank[bank.index(m) + 1 :]
        result += m
    return int(result)


def main():
    try:
        with open(DATA_FILE) as file:
            data = file.read().split()
    except OSError:
        print("Yeuch!")
        exit(1)

    total = 0
    for d in data:
        total += brute_force(d)
    print(total)

    total = 0
    for d in data:
        total += max2(d)
    print(total)

    total = 0
    for d in data:
        total += maxn(d, 12)
    print(total)


if __name__ == '__main__':
    main()
