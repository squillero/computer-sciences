#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-science   |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/


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
