# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import csv

# from icecream import ic

FILE_SAMPLES = 'edna_samples_short.txt'
FILE_DNA_DATA = 'species_dna_data_short.csv'
FILE_SAMPLES = 'edna_samples.txt'
FILE_DNA_DATA = 'species_dna_data.csv'


def read_species(filename):
    """Reads flat DNA samples from file and return a database of
    tuples `(taxonomy, dna)`.

    Notes:
    - `Phylum` and `Class` are not used.
    - The `ScientificName` is first (row[0]) in the csv, hence the correct
      taxonomy is `row[3:5] + row[:1]`
    """

    db = list()
    try:
        with open(filename, newline='') as csvfile:
            csvfile.readline()
            for row in csv.reader(csvfile):
                db.append((tuple(row[3:5] + row[:1]), row[-1]))
    except OSError as problem:
        print(problem)
        return dict()
    return db


def read_samples(filename):
    """Reads DNA samples from file, return a set of samples.
    Reports duplicated lines."""

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


def main():
    species_database = read_species(FILE_DNA_DATA)
    dna_samples = read_samples(FILE_SAMPLES)

    matches = dict()
    matched_samples = set()

    for taxonomy, _ in species_database:
        matches[taxonomy] = 0
    for sample in dna_samples:
        for taxonomy, dna in species_database:
            if sample in dna:
                matched_samples.add(sample)
                matches[taxonomy] += 1

    print()
    print(f"Match percentage: {len(matched_samples) / len(dna_samples):.2%}")
    print()

    # stats (order is irrelevant, but we need to sort out taxonomies)
    print("Taxonomic tree:")
    last_taxonomy = ('', '', '')
    for taxonomy in sorted(matches):
        if taxonomy[0] != last_taxonomy[0]:
            if last_taxonomy[0]:
                print(' |')
            print(taxonomy[0])
        if taxonomy[1] != last_taxonomy[1]:
            print(f" \\_ {taxonomy[1]}")
        last_taxonomy = taxonomy
        if matches[taxonomy]:
            print(f" |      \\_ {taxonomy[2]} ({matches[taxonomy]})")


if __name__ == '__main__':
    main()
