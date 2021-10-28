# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences


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
