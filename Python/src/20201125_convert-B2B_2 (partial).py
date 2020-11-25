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
    """Main entry point"""
    number = input("Number: ")
    base_from = int(input("Base: "))
    base_to = int(input("Base: "))

    if base_from == 10:
        value = int(number)
    else:
        value = convert10(number)

    if base_to == 10:
        result = str(value)
    else:
        result = convert_to_generic_base(value, base_to)

    print(f"{number}|{base_from} = {result}|{base_to}")


def convert_to_generic_base(number, base):
    """Conver a number in base10 to a different base (return a str)"""
    result = ''
    while number > 0:
        result = result + hexadecimal_digit(number % base)
        number = number // base
    if result == '':
        result = '0'        # !!!
    return result[::-1]


def hexadecimal_digit(val):
    if val < 10:
        return str(val)
    elif val == 10:
        return "A"
    elif val == 11:
        return "B"
    elif val == 12:
        return "C"
    elif val == 13:
        return "D"
    elif val == 14:
        return "E"
    elif val == 15:
        return "F"


if __name__ == '__main__':
    main()
