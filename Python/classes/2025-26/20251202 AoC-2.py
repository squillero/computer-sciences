# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

DATA_FILE = '20251202 AoC-2.data.txt'


def read_file(filename):
    f"""Usual 'read file'"""
    id_ranges = list()
    try:
        with open(filename) as file:
            raw = file.read()
    except OSError as problem:
        print(problem)
        return list()
    for token in raw.split(','):
        from_, to_ = token.split('-')
        id_ranges.append((int(from_), int(to_)))
    return id_ranges


def find_divisors(number):
    r"""Return a list with all the divisors of `number`"""
    divisors = list()
    for n in range(1, number // 2 + 1):
        if number % n == 0:
            divisors.append(n)
    return divisors


def is_valid_part1(id_):
    r"""Check id validity (part 2)"""
    if id_[: len(id_) // 2] == id_[len(id_) // 2 :]:
        return False
    else:
        return True


def is_valid_part2(id_):
    r"""Check id_ validity (part 2)"""

    for n in find_divisors(len(id_)):
        # print(f"{id_} = {id_[:n]} repeated {len(id_)//n} times?")
        if id_ == id_[:n] * (len(id_) // n):
            return False
    return True


def main():
    check = 0
    id_ranges = read_file(DATA_FILE)
    for from_, to_ in id_ranges:
        for id_ in range(from_, to_ + 1):
            if not is_valid_part1(str(id_)):
                check += id_
    print(f"Final check: {check}")

    check = 0
    for from_, to_ in id_ranges:
        for id_ in range(from_, to_ + 1):
            if not is_valid_part2(str(id_)):
                check += id_
    print(f"Final check: {check}")


if __name__ == '__main__':
    main()
