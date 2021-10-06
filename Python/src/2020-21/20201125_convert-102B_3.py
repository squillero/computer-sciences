#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/


def main():
    """Main entry point"""
    number = int(input("Number: "))
    base = int(input("Base: "))
    value = convert(number, base)
    print(f"{number}|10 = {value}|{base}")


def convert(number, base):
    result = ''
    while number > 0:
        result = result + str(number % base)
        number = number // base
    if result == '':
        result = '0'  # !!!
    return result[::-1]


if __name__ == '__main__':
    main()
