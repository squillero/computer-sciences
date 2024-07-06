# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE' for details.


from csv import DictReader
from icecream import ic  # really cool debug print

CONSUMPTIONS_FILENAME = 'consumptions.csv'
WHEATHER_FILENAME = 'weather.csv'
SYSTEMS_FILENAME = 'systems.csv'


def read_data(filename):
    """Read a CSV file and return an unrolled list of dictionaries."""
    with open(filename, newline='') as csvfile:
        reader = list(DictReader(csvfile, delimiter=';'))
    return reader


def main():
    # Turn consumption into a dictionary to allow lookups such as:
    # [(Household_ID, Date, Time)] -> energy
    consumption = dict()
    for row in read_data(CONSUMPTIONS_FILENAME):
        consumption[(row['Household_ID'], row['Date'], row['Time'])] = float(row['Energy_consumption'])

    # Parse weather, convert TIME and DATE into tuples
    weather = read_data(WHEATHER_FILENAME)
    for row in weather:
        row['GHI'] = float(row['GHI'])

    # Parse systems, convert System_size and Efficiency into floats
    systems = read_data(SYSTEMS_FILENAME)
    for row in systems:
        row['System_size'] = float(row['System_size'])
        row['Efficiency'] = float(row['Efficiency'])

    # Let's roll

    db_produced_energy = dict()
    db_excess_energy = dict()
    db_self_consumed_energy = dict()
    for rec2 in systems:
        # a DefaultDict would have been better ;-)
        db_produced_energy[rec2['Household_ID']] = 0
        db_excess_energy[rec2['Household_ID']] = 0
        db_self_consumed_energy[rec2['Household_ID']] = 0

    for rec1 in weather:
        for rec2 in systems:
            household = rec2['Household_ID']
            produced_energy = rec2['System_size'] * rec2['Efficiency'] * rec1['GHI']
            consumed_energy = consumption[(rec2['Household_ID'], rec1['DATE'], rec1['TIME'])]
            db_produced_energy[household] += produced_energy
            db_excess_energy[household] += max(0, produced_energy - consumed_energy)
            db_self_consumed_energy[household] += min(produced_energy, consumed_energy)

    print("Aggregate report:")

    print(f"Produced Energy: {sum(db_produced_energy.values()):.2f} kWh")
    print(f"Consumed Energy: {sum(consumption.values()):.2f} kWh")
    print(f"Self-consumed Energy: {sum(db_self_consumed_energy.values()):.2f} kWh")
    print(f"Energy Fed into the Grid: {sum(db_excess_energy.values()):.2f} kWh")
    print(f"Self-consumption Percentage: {sum(db_self_consumed_energy.values())/sum(db_produced_energy.values()):.2%}")
    print(f"Self-sufficiency Percentage: {sum(db_self_consumed_energy.values())/sum(consumption.values()):.2%}")


if __name__ == '__main__':
    main()
