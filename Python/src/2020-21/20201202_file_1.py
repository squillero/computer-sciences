#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

FILENAME = 'snow.x'


def main():
    input_file = open(FILENAME, 'r')
    for line in input_file:
        print(f">>>{line.rstrip()}<<<")
    input_file.close()


if __name__ == '__main__':
    main()
