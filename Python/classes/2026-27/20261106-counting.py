# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.


def main():
    letters = list("GIOVANNI ADOLFO PIETRO PIO")
    count = dict()

    for l in letters:
        # count[l] += 1 -- doesn't work!

        # Take 1
        # if l in count:
        #     count[l] += 1
        # else:
        #     count[l] = 1

        # Take 2
        # if l not in count:
        #     count[l] = 0
        # count[l] += 1

        # Take 3
        # try:
        #     count[l] += 1
        # except KeyError:
        #     count[l] = 1

        # Take 4 ;-)
        count[l] = count.get(l, 0) + 1

    print(count)


main()
