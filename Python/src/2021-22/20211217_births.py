# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILE_NAME = '20211217_births.txt'
MONTH_NAMES = {
    0: 'January',
    1: 'February',
    2: 'March',
    3: 'April',
    4: 'May',
    5: 'June',
    6: 'July',
    7: 'August',
    8: 'September',
    9: 'October',
    10: 'November',
    11: 'December'
}


def count_non_zero(seq):
    nz = 0
    for e in seq:
        if e != 0:
            nz += 1
    return nz


def main():
    month_births = [0] * 12

    try:
        with open(FILE_NAME) as input_file:
            for line in input_file:
                name, surname, place, date_raw = line.split()
                day, month, year = date_raw.split('/')
                day = int(day)
                month = int(month) - 1
                year = int(year)
                month_births[month] += 1
    except OSError as problem:
        print(f"Yeuch, we have a problem: {problem}")
        exit(1)
    max_month = month_births.index(max(month_births))
    print(f"The month with the maximum number of births: {MONTH_NAMES[max_month]}")
    print(
        f"Average number of births per month: {sum(month_births)/count_non_zero(month_births):.2f}")


if __name__ == '__main__':
    main()
