#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/

AVAILABLE_DIGITS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"


def main():
    """Main entry point"""
    number = input("Number: ")
    base_from = int(input("From base: "))
    base_to = int(input("To base: "))

    if base_from == 10:
        value = int(number)
    else:
        value = convert_base_10(number, base_from)

    if base_to == 10:
        result = str(value)
    else:
        result = convert_to_generic_base(value, base_to)

    print(f"{number}|{base_from} = {result}|{base_to}")


def convert_base_10(number, base):
    """Convert a number in any base to base 10"""
    result = 0
    for d in number:
        result = result * base + value(d)
    return result


def convert_to_generic_base(number, base):
    """Convert a number in base10 to a different base (return a str)"""
    result = ''
    while number > 0:
        result = result + hexadecimal_digit(number % base)
        number = number // base
    if result == '':
        result = '0'  # !!!
    return result[::-1]


def value(digit):
    """Value of a single hexadecimal digit"""
    return AVAILABLE_DIGITS.index(digit.upper())


def hexadecimal_digit(val):
    """Hexadecimal digit of a certain value"""
    return AVAILABLE_DIGITS[val]


if __name__ == '__main__':
    main()
