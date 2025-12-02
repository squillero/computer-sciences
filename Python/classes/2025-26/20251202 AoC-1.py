# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

DATA_FILE = '20251202 AoC-1.data.txt'
# DATA_FILE = '20251202 AoC-1.small.txt'


def read_sequence(filename):
    rotations = list()
    try:
        with open(filename) as file:
            for line in file:
                if line[0] == 'R':
                    rotations.append(int(line[1:]))
                else:
                    rotations.append(-int(line[1:]))
    except OSError as problem:
        print(f"Problem: {problem}")
        exit(1)
    return rotations


def main():
    sequence = read_sequence(DATA_FILE)

    dial = 50
    password = 0
    for rot in sequence:
        dial = (dial + rot) % 100
        if dial == 0:
            password += 1
    print(f"The password is {password}")

    dial = 50
    password = 0
    for rot in sequence:
        step = rot / abs(rot)
        for _ in range(abs(rot)):
            dial = (dial + step) % 100

            # alt without %
            # dial += step
            # if dial >= 100:
            #     dial -= 100
            # elif dial < 0:
            #     dial += 100

            if dial == 0:
                password += 1
    print(f"The password is {password}")


if __name__ == '__main__':
    main()
