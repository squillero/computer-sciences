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


FILE_NAME = 'heaven.txt'


def main():
    words = set()
    with open(FILE_NAME, 'r') as song:
        for line in song:
            for w in line.split():
                stripped_word = w.upper().strip('!?,.\'"')
                words.add(stripped_word)
    print(sorted(words))
    print(f"Found {len(words):,} unique words")


if __name__ == '__main__':
    main()
