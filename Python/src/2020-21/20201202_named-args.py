#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/


def foo(day, month):
    print(f"Hey, day={day} and month={month}")


def main():
    foo(23, 10)
    foo(day=23, month=10)
    foo(month=10, day=23)


if __name__ == '__main__':
    main()
