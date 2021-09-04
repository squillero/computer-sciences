#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/


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
    supergroup |= beatles  # ie. add all elements of beatles to supergroup aka. "update"
    supergroup |= stones
    supergroup |= queen
    print(f"SUPERGROUP: {sorted(supergroup)}")


if __name__ == '__main__':
    main()
