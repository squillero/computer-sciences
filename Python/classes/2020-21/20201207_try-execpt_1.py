# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


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
