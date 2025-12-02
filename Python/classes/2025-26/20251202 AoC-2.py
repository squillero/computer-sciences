# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

DATA_FILE = '20251202 AoC-2.data.txt'


def read_file(filename):
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


def main():
    check = 0
    id_ranges = read_file(DATA_FILE)
    for from_, to_ in id_ranges:
        for id_ in range(from_, to_ + 1):
            tmp = str(id_)
            if tmp[: len(tmp) // 2] == tmp[len(tmp) // 2 :]:
                check += id_
                print(tmp)
    print(f"Final check: {check}")


if __name__ == '__main__':
    main()
