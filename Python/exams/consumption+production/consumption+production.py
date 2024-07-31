# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


from csv import DictReader
# from icecream import ic  # really cool debug print

CONSUMPTIONS_FILENAME = 'consumptions.csv'
WHEATHER_FILENAME = 'weather.csv'
SYSTEMS_FILENAME = 'systems.csv'


def read_data(filename):
    """Read a CSV file and return an unrolled list of dictionaries."""
    try:
        with open(filename, newline='') as csvfile:
            reader = DictReader(csvfile, delimiter=';')
            data = list(reader)
    except OSError as problem:
        exit(f"{filename}: {problem}")
    return data


def main():
    """Standard entry point."""

    # Turn consumption into a dictionary to allow lookups with tuple like:
    # (Household_ID, Date, Time) -> energy
    consumption = dict()
    for row in read_data(CONSUMPTIONS_FILENAME):
        consumption[(row['Household_ID'], row['Date'], row['Time'])] = float(row['Energy_consumption'])

    # Parse weather, convert GHI into floats
    weather = read_data(WHEATHER_FILENAME)
    for row in weather:
        row['GHI'] = float(row['GHI'])

    # Parse systems, convert System_size and Efficiency into floats
    systems = read_data(SYSTEMS_FILENAME)
    for row in systems:
        row['System_size'] = float(row['System_size'])
        row['Efficiency'] = float(row['Efficiency'])

    # Let's roll

    tot_produced_energy = 0
    tot_excess_energy = 0
    tot_self_consumed_energy = 0

    for rec1 in weather:
        for rec2 in systems:
            produced_energy = rec2['System_size'] * rec2['Efficiency'] * rec1['GHI']
            consumed_energy = consumption[(rec2['Household_ID'], rec1['DATE'], rec1['TIME'])]
            tot_produced_energy += produced_energy
            tot_excess_energy += max(0, produced_energy - consumed_energy)
            tot_self_consumed_energy += min(produced_energy, consumed_energy)

    print("Aggregate report:")

    print(f"Produced Energy: {tot_produced_energy:.2f} kWh")
    print(f"Consumed Energy: {sum(consumption.values()):.2f} kWh")
    print(f"Self-consumed Energy: {tot_self_consumed_energy:.2f} kWh")
    print(f"Energy Fed into the Grid: {tot_excess_energy:.2f} kWh")
    print(f"Self-consumption Percentage: {tot_self_consumed_energy/tot_produced_energy:.2%}")
    print(f"Self-sufficiency Percentage: {tot_self_consumed_energy/sum(consumption.values()):.2%}")


if __name__ == '__main__':
    main()
