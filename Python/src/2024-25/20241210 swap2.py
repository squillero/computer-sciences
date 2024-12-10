# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def swap(item):
    return item[1], item[0]


def extract_birthday(item):
    return item[1][1], item[1][0], item[0]


def main():
    birthdays = {
        'Lucilla': (18, 5),  # -> (5, 18, 'Lucilla')
        'Adam': (21, 5),
        'Giovanni': (23, 10),
        'Paola': (18, 5),  # -> (5, 18, 'Paola')
        'Gabriele': (12, 5),
        'Elena': (26, 1),
    }
    for k, v in sorted(birthdays.items(), key=extract_birthday):
        print(f"Brithday of {k} is {v}")


if __name__ == '__main__':
    main()
