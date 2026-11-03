# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.


def main():
    """Standard boilerplate."""

    birthday = dict()
    birthday["Giovanni"] = (23, 10)
    birthday["Paola"] = (18, 5)

    try:
        print(f"{birthday['Giovanni']}!!!")
        print(f"{birthday['Gabriele']}!!!")
        print(f"{birthday['Paola']}!!!")
    except:
        print("We got a problem...")


main()
