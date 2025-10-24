# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def factorial(n):
    if n > 1:
        return n * factorial(n - 1)
    else:
        return 1


def main():
    print(factorial(50))


if __name__ == "__main__":
    main()
