# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


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
