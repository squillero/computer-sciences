# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from random import randint

PARKING_LOT_SIZE = 30


def find_available(parking):
    slots = list()
    s = 0
    for i, p in enumerate(parking):
        if p == "#":
            if s < i:
                slots.append((s, i))
            s = i + 1
    if s < len(parking):
        slots.append((s, len(parking)))
    return slots


def slot_size(slot):
    return slot[1] - slot[0]


def main():
    parking = ["-"] * PARKING_LOT_SIZE
    first = randint(0, PARKING_LOT_SIZE - 1)
    parking[first] = "#"
    print("".join(parking))
    for car in range(5):
        slots = find_available(parking)
        print(slots)
        largest_slot = max(slots, key=slot_size)
        middle = (
            largest_slot[0] + (largest_slot[1] - largest_slot[0]) // 2
        )
        parking[middle] = "#"
        print("".join(parking))


if __name__ == "__main__":
    main()
