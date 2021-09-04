#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-science   |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/

FILENAME = 'snow.x'


def main():
    input_file = open(FILENAME, 'r')
    whole_file = input_file.read()
    input_file.close()

    for line in whole_file.splitlines():
        print(f"Chunk: >>{line.rstrip()}<<")


if __name__ == '__main__':
    main()
