#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/


def main():
    file = open("duck.txt", "r")
    line = file.readline()
    line = file.readline()
    while line != '':
        print(f"LINE: <<<{line[:-1]}>>>")
        line = file.readline()
    file = ""
    file.close()


if __name__ == '__main__':
    main()
