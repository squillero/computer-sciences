#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/


def main():
    """Main entry point"""
    foo = list("ABCDEF")

    print(foo)

    # slice to substitute
    # foo[2:3] = ['XXX', 'YYY', 'ZZZ']

    # slice to insert
    # foo[2:2] = ['XXX', 'YYY', 'ZZZ']

    # slice to remove
    # foo[2:3] = []

    print(foo)


if __name__ == '__main__':  # BLACK MAGIC!
    main()
