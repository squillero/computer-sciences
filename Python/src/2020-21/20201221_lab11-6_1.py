# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

FILE_NAME = 'rawdata_2004.txt'


def main():
    """Entry point"""

    countries = dict()
    try:
        with open(FILE_NAME, 'r') as file_in:
            for raw_line in file_in:
                line = raw_line.rstrip()
                line_number, country, income = line[:7], line[7:58], line[58:]
                key = country.rstrip()
                value = int(income[1:].replace(',', ''))
                countries[key] = value
    except OSError as problem:
        print(f"Yeuch, we have a problem: {problem}")

    print(countries)


if __name__ == '__main__':
    main()
