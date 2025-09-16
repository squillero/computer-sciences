# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic

BUILDING_DATA_FILENAME = ['building1.csv', 'building2.csv']
MONTH_NAMES = [
    '',  # month 0 ;-)
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


def strseq_to_inttuple(strseq):
    """Convert a sequence of strings into a tuple of ints
    Eg. ['18', '5', '1872'] -> (18, 5, 1872)
    Pythonic one liner: tuple(int(_) for _ in strseq)
    """
    result = list()
    for n in strseq:
        result.append(int(n))
    return tuple(result)


def read_building_data(filename):
    """Slurp a file with data, remove times, and convert str->number
    Returns a list of tuples [((day, month, year), consumption), ...]
    Note: I always prefer tuples over lists if data are read-only
    """
    building_data = list()
    try:
        with open(filename, newline='') as data:
            data.readline()  # discard first line
            for line in data:
                timestamp, consumption = line.split(',')
                timestamp = timestamp.split(' ')
                date = strseq_to_inttuple(timestamp[0].split('-'))
                consumption = float(consumption)
                building_data.append((date, consumption))
    except OSError as problem:
        exit(f"Yeuch: {problem}")
    return building_data


def main():
    # Just read data for all buildings and store, I'll examine them later
    # Note: works with any number of buildings ;-)
    all_building_data = list()
    for building_number, data_file in enumerate(BUILDING_DATA_FILENAME):
        for date, consumption in read_building_data(data_file):
            all_building_data.append((building_number, date, consumption))
    # Now all_building_data contains a list of tuple with, like
    # (2, (12, 4, 17), 483.992325)

    # statistics: let's split data on date
    all_months = set()
    all_days = set()
    monthly_consumption = dict()  # more idiomatic: use a defaultdict()
    for _, date, consumption in all_building_data:
        day, month, year = date  # unpacking
        all_days.add((day, month, year))  # count different (day, month, year)
        all_months.add((month, year))  # count different (month, year)
        if consumption > 0:
            # I'm only interested if consuption > 0
            if month not in monthly_consumption:  # terrible without a defaultdict()
                monthly_consumption[month] = 0
            monthly_consumption[month] += consumption

    print(f"Analyzed period: {len(all_months)} months, {len(all_days)} days")
    print("Consumption in the analyzed period:")
    print(f"maximum monthly consumption: {max(monthly_consumption.values()):.2f}W")
    print(f"minimum monthly consumption: {min(monthly_consumption.values()):.2f}W")
    print()
    print("Monthly consumption:")
    for m, c in monthly_consumption.items():
        print(f"{MONTH_NAMES[m]}: {c:.0f}")
    print()

    print("Statistics:")
    for b in range(len(BUILDING_DATA_FILENAME)):
        # Repeat for all buildings, much slower but sligthly simpler
        maximum_daily_consumption = ((0, 0, 0), 0)
        building_consumption = list()
        for building, date, consumption in all_building_data:
            if building != b:
                continue  # Not the building we are interest in, go to next record
            building_consumption.append(consumption)  # big list for the building b
            if consumption > maximum_daily_consumption[1]:  # update max of building b
                maximum_daily_consumption = (date, consumption)
        # The string is split in multiple lines just to ease reading
        print(
            f"building {b+1}: "
            + f"average daily consumption {sum(building_consumption)/len(building_consumption):.2f}W,"
            + f" maximum daily consumption {maximum_daily_consumption[1]:.2f}W"
            + f" ({maximum_daily_consumption[0][0]}-{maximum_daily_consumption[0][1]}-{maximum_daily_consumption[0][2]})"
        )


if __name__ == '__main__':
    # Entry point
    main()
