# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    """Main entry point"""
    foo = list("Giovanni Adolfo Pietro Pio Squillero")
    pos = my_index(foo, "i")
    print(pos)


def my_index(list_, element):
    """Returns a list with all the positions of element in list_"""
    pos = []
    for i in range(len(list_)):
        if list_[i] == element:
            pos.append(i)
    return pos


if __name__ == '__main__':  # BLACK MAGIC!
    main()
