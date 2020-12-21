##--------------#-----------------------------------------------------------#
#|              | CLASS SAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)            #
#|   ######     | (!) 2020, Giovanni Squillero <squillero@polito.it>        #
#|  #######     | https://github.com/squillero/computer-sciences            #
#|  ####   \    |                                                           #
#|   ###G  c\   | => Copying and distributing this file for classroom use,  #
#|   ##     _\  | either with or without modification, is permitted without #
#|   |    _/    | royalties provided that this 11-line comment is preserved #
#|   |   _/     |                                                           #
#|              | => THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY       #
##--------------#-----------------------------------------------------------#


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
