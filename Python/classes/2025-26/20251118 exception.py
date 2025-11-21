# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# 無 or 无

def main():
    a = 3
    b = list(range(8))
    for n in range(10):
        try:
            x = b[n] / (a - n)
        except ZeroDivisionError:
            x = None
        except IndexError:
            x = "I'm >18"
        print(f"n={n} / x={x}")


if __name__ == '__main__':
    main()
