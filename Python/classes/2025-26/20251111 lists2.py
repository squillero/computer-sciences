# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    foo = list("Giovanni Adolfo Pio Pietro")
    foo[9] = 'X'
    bar = "".join(foo)
    print(bar)


if __name__ == "__main__":
    main()
