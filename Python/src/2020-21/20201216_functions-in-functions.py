#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/


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
