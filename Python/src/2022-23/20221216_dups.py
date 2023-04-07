# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

import random


def main():
    numbers = list()
    for _ in range(1_000_000):
        numbers.append(random.randint(1, 1_000_000))

    # remove dups
    numbers2 = list(set(numbers))
    print(f"{len(numbers):,} vs. {len(numbers2):,}")


if __name__ == '__main__':
    main()
