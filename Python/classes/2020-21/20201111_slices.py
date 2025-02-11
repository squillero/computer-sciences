# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


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
