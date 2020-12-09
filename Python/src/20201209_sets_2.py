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


def main():
    beatles = {'John', 'Paul', 'George', 'Ringo'}
    stones = {'Mick', 'Keith', 'Charlie', 'Ronnie'}
    queen = {'Freddie', 'Brian', 'Roger', 'John'}

    # functions
    print(beatles.union(stones))
    print(beatles.union(queen))
    print(beatles.intersection(stones))
    print(beatles.intersection(queen))
    print(beatles.difference(queen))
    print(queen.difference(beatles))

    # operands {}
    print(beatles | stones)
    print(beatles | queen)
    print(beatles & stones)
    print(beatles & queen)
    print(beatles - queen)
    print(queen - beatles)

    # supergroup
    supergroup = beatles | stones | queen
    print(f"SUPERGROUP: {sorted(supergroup)}")

    supergroup = set()
    supergroup |= beatles   # ie. add all elements of beatles to supergroup aka. "update"
    supergroup |= stones
    supergroup |= queen
    print(f"SUPERGROUP: {sorted(supergroup)}")


if __name__ == '__main__':
    main()
