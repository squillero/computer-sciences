##--------------#-----------------------------------------------------------#
#|              | CLASS SAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)            #
#|   ######     | (!) 2020, Giovanni Squillero <squillero@polito.it>        #
#|  #######     | https://github.com/squillero/computer-sciences            #
#|  ####   \    |                                                           #
#|   ###G  c\   | => Copying and distributing this file for classroom use,  #
#|   ##     _\  | either with or without modification, is permitted without #
#|   |    _/    | royalties provided that this 11-line comment is preserved #
#|   |   _/     |                                                           #
#|              | => THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY       #
##--------------#-----------------------------------------------------------#

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
    frequency = list()

    # step 1: count results
    frequency = [0, 0, 0, 0, 0, 0]
    for r in values:
        if r == 1:
            frequency[0] = frequency[0] + 1
        elif r == 2:
            frequency[1] = frequency[1] + 1
        elif r == 3:
            frequency[2] = frequency[2] + 1
        elif r == 4:
            frequency[3] = frequency[3] + 1
        elif r == 5:
            frequency[4] = frequency[4] + 1
        elif r == 6:
            frequency[5] = frequency[5] + 1

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
