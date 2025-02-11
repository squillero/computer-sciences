# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    """Main entry point"""
    number = input("Number: ")
    base = int(input("Base: "))
    value = convert10(number, base)
    print(f"{number}|{base} = {value}|10")


def convert10(number, base):
    value = 0
    for n, d in enumerate(reversed(number)):
        value = value + int(d) * base**n
    return value


if __name__ == '__main__':
    main()
