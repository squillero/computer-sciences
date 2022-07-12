# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

NUM_VALUES = 60000

from random import randint


def main():
    """Main entry point"""

    die_values = list()
    for i in range(NUM_VALUES):
        die_values.append(randint(1, 6))

    if check(die_values):
        print("Whoa, dice is fair")
    else:
        print("Watchout!!!! Dice is *NOT* fair")


def check(values):
    """Check whether the dice is fair"""

    # step 1: count results
    frequency = [0, 0, 0, 0, 0, 0]
    for r in values:
        frequency[r - 1] = frequency[r - 1] + 1

    # normalize
    for f in range(len(frequency)):
        frequency[f] = frequency[f] / len(values)
    print(frequency)

    # check them
    expected_frequency = 1 / 6
    acceptable_error = 0.01
    all_correct = True
    for f in frequency:
        if abs(f - expected_frequency) > acceptable_error:
            all_correct = False

    return all_correct


if __name__ == '__main__':
    main()
