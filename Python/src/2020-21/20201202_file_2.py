#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/

FILENAME = 'snow.x'


def main():
    input_file = open(FILENAME, 'r')
    for line in input_file:
        for word in line.split():
            trimmed_word = word.strip('.,!?\'"')
            print(f">>{trimmed_word}<<")
    input_file.close()


if __name__ == '__main__':
    main()
