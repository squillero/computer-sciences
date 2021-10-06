#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/


def draw_line(size):
    print("#" * size)


def main():
    foo = int(input("Square size: "))
    draw_square(foo)


def draw_square(size):
    for l in range(size):
        draw_line(size)


main()
