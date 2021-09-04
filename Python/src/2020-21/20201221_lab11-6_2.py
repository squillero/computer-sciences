#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/

FILE_NAME = 'rawdata_2004.txt'


def main():
    """Entry point"""

    countries = dict()
    try:
        with open(FILE_NAME, 'r') as file_in:
            for raw_line in file_in:
                line = raw_line.rstrip()
                first_block, income = line.rsplit(maxsplit=1)
                line_number, country = first_block.split(maxsplit=1)
                value = int(income[1:].replace(',', ''))
                countries[country] = value
    except OSError as problem:
        print(f"Yeuch, we have a problem: {problem}")

    print(countries)


if __name__ == '__main__':
    main()
