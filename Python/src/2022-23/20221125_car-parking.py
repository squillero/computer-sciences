# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

def park2list(parking):
    """Convert parking [False, False, False, ...] to
    list of tuples"""
    slots = list()
    end = 0
    start = 0
    while end < len(parking):
        if parking[end]:
            slots.append((start, end-start))
            start = end+1
        end += 1
    else:
        slots.append((start, end - start))
    return slots


def get_max_slot(slots):
    m = slots.pop(0)
    for s in slots:
        if s[1] > m[1]:
            m = s
    return m


def main():
    parking = [False, False, False, False, False, False, False, False, False]
    for _ in range(5):
        s, l = get_max_slot(park2list(parking))
        parking[s+l//2] = True
        print(parking)



if __name__ == '__main__':
    main()
