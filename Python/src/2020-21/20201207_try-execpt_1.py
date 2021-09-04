#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/


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
