# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import csv
from pprint import pprint

EDNA_SAMPLES_FILENAME = 'edna_samples_short.txt'
SPECIES_FILENAME = 'species_dna_data_short.csv'
EDNA_SAMPLES_FILENAME = 'edna_samples.txt'
SPECIES_FILENAME = 'species_dna_data.csv'


def read_edna(filename):
    samples = list()
    check = set()
    try:
        with open(filename) as file:
            for line in file:
                if line in check:
                    print(f"Repeated sample: {line[:-1]}")
                else:
                    check.add(line)
                    id_, dna = line.rstrip().split(';')
                    samples.append((id_, dna))
    except OSError as problem:
        print(f"Yeuch: {problem}")
    return samples


def process_species(filename, samples):
    r"""Read n' count (Order/Family/ScientificName)"""
    species = dict()
    matched = set()
    try:
        with open(filename, newline='') as csvfile:
            reader = csv.DictReader(csvfile)
            for line in reader:
                # 1. order
                order = line['Order']
                if order not in species:
                    species[order] = dict()
                # 2. Family
                family = line['Family']
                if family not in species[order]:
                    species[order][family] = dict()
                # 3. Scientific Name
                scientific_name = line['ScientificName']
                matches = match_fragment(line['DNA_sequence'], samples, matched)
                species[order][family][scientific_name] = matches
    except OSError as problem:
        print(f"Yeuch: {problem}")
    return species, matched


def match_fragment(species, samples, matched):
    count = 0
    for s in samples:
        if s[1] in species:
            matched.add(s[0])
            count += 1
    return count


def main():
    edna_samples = read_edna(EDNA_SAMPLES_FILENAME)
    species, matched = process_species(SPECIES_FILENAME, edna_samples)

    print(f"Match percentage: {len(matched)/len(edna_samples):.2%}")

    separator = ''
    for order in species:
        print(f"{separator}{order}")
        for family in species[order]:
            print(f" \\_ {family}")
            for scientific_name in species[order][family]:
                if species[order][family][scientific_name] > 0:
                    print(
                        f" |      \\_ {scientific_name} ({species[order][family][scientific_name]})"
                    )
        separator = ' |\n'


if __name__ == '__main__':
    main()
