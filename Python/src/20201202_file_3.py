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


FILENAME = 'snow.x'
CHUNK_SIZE = 7


def main():
    input_file = open(FILENAME, 'r')
    chunk = input_file.read(CHUNK_SIZE)
    while chunk != '':
        print(f"Chunk: >>{chunk}<<")
        chunk = input_file.read(CHUNK_SIZE)
    input_file.close()


if __name__ == '__main__':
    main()
