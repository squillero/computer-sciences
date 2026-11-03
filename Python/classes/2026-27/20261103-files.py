# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.


def main():
    try:
        file_handler = open("20261103-jdkdrgjsong.mnns")
        content = file_handler.read()
        print(content)
        file_handler.close()
    except OSError:
        print("Yeuch! We got a problem")
        exit()


main()
