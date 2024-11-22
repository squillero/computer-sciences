# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    number = None
    while number is None:
        try:
            number = int(input("Number: "))
        except ValueError:
            pass
    try:
        inverse = 1 / number
    except ZeroDivisionError:
        inverse = None
    print(f"Inverse of {number} is {inverse}")


if __name__ == '__main__':
    main()
