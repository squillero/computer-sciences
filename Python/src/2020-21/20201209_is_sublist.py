# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


def is_sublist(l1, l2):
    for e in l2:
        if e not in l1:
            return False
    return True


def main():
    list1 = list("GIOVANNI")
    print(is_sublist(list1, "NIO"))
    print(is_sublist(list1, "XYZ"))


if __name__ == '__main__':
    main()
