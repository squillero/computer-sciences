# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic


def collatz(num):
    """Return the Collatz sequence starting with `num`"""
    sequence = [num]
    while sequence[-1] != 1:
        n = sequence[-1]
        if n % 2 == 0:
            n //= 2
        else:
            n = n * 3 + 1
        sequence.append(n)
    return sequence


def main():
    """Entry point"""
    max_len = 0
    for n in range(1, 10_000 + 1):
        seq = collatz(n)
        if len(seq) > max_len:
            max_len = len(seq)
            max_start = n
            ic(max_start, max_len)
    print(
        f"The longest Collatz sequence starts with {max_start} and it contains {max_len} elements"
    )


if __name__ == '__main__':
    main()
