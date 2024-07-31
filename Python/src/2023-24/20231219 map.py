# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    values = list(range(10, 20, 3))
    print(values)
    return_value = list(map(lambda n: n**n, values))
    print(f"RET: {return_value}")


if __name__ == "__main__":
    main()
