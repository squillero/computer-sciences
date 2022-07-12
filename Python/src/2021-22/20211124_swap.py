# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


def main():
    foo = list("GIOVANNI")
    bar = swap(foo)
    print(f"{foo} -> {bar}")


def swap(original_list):
    new_list = original_list[:]
    new_list[0], new_list[-1] = new_list[-1], new_list[0]
    return new_list


main()
