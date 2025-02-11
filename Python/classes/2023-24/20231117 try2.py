# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def safe_get_integer():
    value = None
    while value is None:
        try:
            string = input("Number: ")
            value = int(string)
        except ValueError as problem:
            print(problem)
            value = None
    return value


def main():
    x = safe_get_integer()
    print(x)


if __name__ == "__main__":
    main()
