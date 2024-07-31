# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    foo = list("GIOVANNI")
    bar = swap(foo)
    print(f"{foo} -> {bar}")


def swap(original_list):
    new_list = original_list[:]
    new_list[0], new_list[-1] = new_list[-1], new_list[0]
    return new_list


main()
