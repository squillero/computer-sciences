# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


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

    tmp = ''
    for r in reversed(result):
        tmp = tmp + str(r)
    return tmp


if __name__ == '__main__':
    main()
