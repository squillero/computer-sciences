# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILE_SAMPLES = 'edna_samples_short.txt'
FILE_DNA_DATA = 'species_dna_data_short.csv'
FILE_SAMPLES = 'edna_samples.txt'
FILE_DNA_DATA = 'species_dna_data.csv'

import csv
from icecream import ic


def read_species(filename):
    """Reads flat DNA samples from file and return a structerd database

    The database is a hierarchical `dict` of `dict`, from Order down to
    Scientific Name. As a result, DNA samples can be simply fetched as

    `db[Order][Family][ScientificName]`

    Notes:
    - `Phylum` and `Class` are not used.
    - The `ScientificName` is first (row[0]) in the csv, hence the correct
      taxonomy is `row[3:5] + row[:1]`
    """

    db = dict()
    try:
        with open(filename, newline='') as csvfile:
            csvfile.readline()
            for row in csv.reader(csvfile):
                store(db, row[3:5] + row[:1], row[-1])  # row[1:5]
    except OSError as problem:
        print(problem)
        return dict()
    return db


def store(species_database, taxonomy, dna_sample):
    """Store the DNA sample in a hierarchical DB of dicts

    - database: the dictionary of dictionaries
    - taxonomy: the list of ranks [Phylum, Class, ..., Scientific Name]
    - dna_sample: ;-)
    """
    for rank in taxonomy[:-1]:
        if rank not in species_database:
            species_database[rank] = dict()
        species_database = species_database[rank]
    species_database[taxonomy[-1]] = dna_sample


def read_samples(filename):
    """Reads DNA samples from file, return a dictionary with sample_id as key
    and DNA sample as value. Reports duplicated lines."""

    samples = set()
    parsed_lines = set()
    with open(filename) as txtfile:
        for line, text in enumerate(txtfile):
            text = text.strip()
            if text in parsed_lines:
                print(f"Repeated sample (line={line}): {text}")
                continue

            parsed_lines.add(text)
            _, dna = text.split(';')
            samples.add(dna)
    return samples


def match(species_dna, samples):
    """Count number of matching fragments"""
    matches = 0
    for dna in samples:
        matches += dna in species_dna
    return matches


def main():
    species_database = read_species(FILE_DNA_DATA)
    dna_samples = read_samples(FILE_SAMPLES)

    matching_samples = set()
    for order in species_database:
        for family in species_database[order]:
            for species in species_database[order][family]:
                for sample in dna_samples:
                    if sample in species_database[order][family][species]:
                        matching_samples.add(sample)
    print()
    print(f"Match percentage: {len(matching_samples) / len(dna_samples):.2%}")
    print()

    # stats (order is irrelevant)
    print("Taxonomic tree:")
    link = ''
    for order in species_database:
        print(f"{link}{order}")
        for family in species_database[order]:
            print(f" \\_ {family}")
            for species in species_database[order][family]:
                num = match(species_database[order][family][species], dna_samples)
                if num:
                    print(f" |      \\_ {species} ({num})")
        link = '|\n'


if __name__ == '__main__':
    main()
