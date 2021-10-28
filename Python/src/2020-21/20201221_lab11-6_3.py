#  Copyright © 2020 Giovanni Squillero <squillero@polito.it>
#  Free for personal or classroom use; see 'LICENCE.md' for details.
#  https://github.com/squillero/computer-sciences
FILE_URL = 'https://www.cia.gov/library/publications/the-world-factbook/rankorder/rawdata_2004.txt'

import urllib.request as req


def main():
    """Entry point"""

    countries = dict()
    try:
        for raw_line in req.urlopen(FILE_URL):
            line = raw_line.decode('utf-8').rstrip()
            first_block, income = line.rsplit(maxsplit=1)
            line_number, country = first_block.split(maxsplit=1)
            value = int(income[1:].replace(',', ''))
            countries[country] = value
    except OSError as problem:
        print(f"Yeuch, we have a problem: {problem}")

    # not sorted (ie. creation order)
    for k in countries:
        print(f"{k} -> {countries[k]}")
    print()

    # sorted in alphabetic order
    for k in sorted(countries):
        print(f"{k} -> {countries[k]}")
    print()

    # sorted according to the value
    from operator import itemgetter
    for k in sorted(countries, key=itemgetter(1), reverse=True):
        print(f"{k} -> {countries[k]}")
    print()

    # sorted according to the value (but using a lambda)
    for k in sorted(countries, key=lambda k: countries[k], reverse=True):
        print(f"{k} -> {countries[k]}")
    print()


if __name__ == '__main__':
    main()
