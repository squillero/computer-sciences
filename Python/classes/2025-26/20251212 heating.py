# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

BUILDING1_FILENAME = 'building1.csv'
BUILDING2_FILENAME = 'building2.csv'

MONTH_NAME = [
    'January',
    'February',
    'March',
    'April',
    'May',
    'June',
    'July',
    'August',
    'September',
    'October',
    'November',
    'December',
]


def read_building(building_number, filename):
    report = dict()
    try:
        with open(filename) as file:
            file.readline()
            for line in file:
                timestamp, consumption = line.split(',')
                date, time = timestamp.split()
                day, month, year = date.split('-')
                hour, minute = time.split(':')
                report[
                    (building_number, int(year), int(month), int(day), int(hour), int(minute))
                ] = float(consumption)
    except OSError as problem:
        print(f"Yeuch: {problem}")
    return report


def main():
    report = read_building(1, BUILDING1_FILENAME) | read_building(2, BUILDING2_FILENAME)
    months = set()
    days = set()
    for _, y, m, d, _, _ in report:
        months.add((y, m))
        days.add((y, m, d))
    print(f"Analyzed period: {len(months)} months, {len(days)} days")

    monthly_consumption = [0] * 12
    for timestamp, consumption in report.items():
        monthly_consumption[timestamp[2] - 1] += consumption
    tmp = list()
    for c in monthly_consumption:
        if c > 0:
            tmp.append(c)
    print(f"maximum monthly consumption: {max(tmp):.2f}W")
    print(f"minimum monthly consumption: {min(tmp):.2f}W")

    for m, c in enumerate(monthly_consumption):
        if c > 0:
            print(f"{MONTH_NAME[m]}: {c:.0f}")
    # pprint(monthly_consumption)


if __name__ == '__main__':
    main()
