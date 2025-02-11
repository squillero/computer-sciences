# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    """Main entry point"""
    number = int(input("Number: "))
    base = int(input("Base: "))
    value = convert(number, base)
    print(f"{number}|10 = {value}|{base}")


def convert(number, base):
    result = []
    while number > 0:
        r = number % base
        result.append(r)
        number = number // base

    result.reverse()
    tmp = ''
    for r in result:
        tmp = tmp + str(r)
    return tmp


if __name__ == '__main__':
    main()
