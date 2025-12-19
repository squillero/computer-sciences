# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

PROBLEM_FILENAME = 'locations-large.txt'


def main():
    left = list()
    right = list()
    try:
        with open(PROBLEM_FILENAME) as file:
            for line in file:
                l, r = line.split()
                left.append(int(l))
                right.append(int(r))
    except OSError:
        print("Yeuch")
        exit(1)

    left.sort()
    right.sort()
    distance = 0
    for l, r in zip(left, right):
        distance += abs(l - r)
    print(distance)


if __name__ == '__main__':
    main()
