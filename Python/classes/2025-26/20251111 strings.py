# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    name = "Giovanni Adolfo Pio Pietro"
    foo = name.split('i')  # ie. foo = str.split(name, "i")
    print(foo)
    bar = "i".join(foo)
    print(bar)

    foo = name.rsplit('i')  # ie. foo = str.split(name, "i")
    print(foo)
    bar = "i".join(foo)
    print(bar)

    print(name.split(maxsplit=1))
    print(name.rsplit(maxsplit=1))


if __name__ == "__main__":
    main()
