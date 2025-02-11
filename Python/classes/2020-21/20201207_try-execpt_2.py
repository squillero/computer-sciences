# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    while True:
        try:
            user_input = input("> ")
            value = int(user_input)
            print(f"Value is {value}")
        except ValueError:
            pass


if __name__ == '__main__':
    main()
