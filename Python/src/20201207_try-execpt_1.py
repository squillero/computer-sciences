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


def safe_int(whatever):
    try:
        value = int(whatever)
    except ValueError as exception:
        print(f"Yeuch: {str(exception)}")
        value = 0
    return value


def main():
    while True:
        user_input = input("> ")
        value = safe_int(user_input)
        print(f"Value is {value}")


if __name__ == '__main__':
    main()
