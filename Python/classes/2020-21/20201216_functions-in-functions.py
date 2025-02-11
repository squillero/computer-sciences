# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    """Entry point"""
    foo()
    bar()
    baz()  # Error!


def foo():
    print("I'm Foo!")

    def baz():
        print("I'm Baz...")

    baz()


def bar():
    print("I'm Bar!")


if __name__ == '__main__':
    main()
