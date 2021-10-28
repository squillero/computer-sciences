#  Copyright © 2020 Giovanni Squillero <squillero@polito.it>
#  Free for personal or classroom use; see 'LICENCE.md' for details.
#  https://github.com/squillero/computer-sciences


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
        result = '0'  # !!!
    return result[::-1]


def hexadecimal_digit(val):
    if val == 0:
        return "0"
    elif val == 1:
        return "1"
    elif val == 2:
        return "2"
    elif val == 3:
        return "3"
    elif val == 4:
        return "4"
    elif val == 5:
        return "5"
    elif val == 6:
        return "6"
    elif val == 7:
        return "7"
    elif val == 8:
        return "8"
    elif val == 9:
        return "9"
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
