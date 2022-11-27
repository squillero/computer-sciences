# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.


def seek_cars(parking):
    """
    return [slot for slot, occupied in enumerate([True] + parking + [True]) if occupied]
    """
    cars = list()
    for slot, occupied in enumerate([True] + parking + [True]):
        if occupied:
            cars.append(slot)
    return cars


def get_spaces(cars):
    """
    return [(c1, c2 - c1 - 1) for c1, c2 in zip(cars, cars[1:])]
    """
    spaces = list()
    for car1, car2 in zip(cars, cars[1:]):
        spaces.append((car1, car2 - car1 - 1))
    return spaces


def get_largest_space(spaces):
    """
    return max(spaces, key=lambda i: i[1])
    """
    max_ = spaces.pop(0)
    for s in spaces:
        if s[1] > max_[1]:
            max_ = s
    return max_


def main():
    parking = [False, False, False, False, False, False, False, False, False]
    for _ in range(5):
        s, l = get_largest_space(get_spaces(seek_cars(parking)))
        parking[s + l // 2] = True
        print(parking)


if __name__ == '__main__':
    main()
