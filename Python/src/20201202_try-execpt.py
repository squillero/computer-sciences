##--------------#-----------------------------------------------------------#
#|              | CLASS SAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)            #
#|   ######     | (!) 2020, Giovanni Squillero <squillero@polito.it>        #
#|  #######     | https://github.com/squillero/computer-sciences            #
#|  ####   \    |                                                           #
#|   ###G  c\   | => Copying and distributing this file for classroom use,  #
#|   ##     _\  | either with or without modification, is permitted without #
#|   |    _/    | royalties provided that this 11-line comment is preserved #
#|   |   _/     |                                                           #
#|              | => THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY       #
##--------------#-----------------------------------------------------------#

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
