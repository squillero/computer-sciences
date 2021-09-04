#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/

from random import randint


def foo(x):
    if x == 42:
        raise ValueError("Can't handle 42!")
    print(f"x is {x}")


def main():
    try:
        for i in range(100):
            foo(randint(0, 100))
    except ValueError as ve:
        print(f"Yeuch: {ve}")
    finally:
        print("That's all...")


if __name__ == '__main__':
    main()
