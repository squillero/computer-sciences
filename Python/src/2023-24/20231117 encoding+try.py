# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

import my_lib


def slurp():
    with open("20231117 test.txt", encoding="utf-8") as input_file:
        whole_file = input_file.read()
    return whole_file


def line_by_line():
    try:
        with open(
            "20231117 test.txt", encoding="utf-8"
        ) as input_file:
            for line in input_file:
                line = line.rstrip()
                print(f'Doing something with: "{line}"')
            zap = 3 / 0
    except OSError as problem:
        exit(f"Yeuch, we had a problem: {problem}")


def main():
    line_by_line()


if __name__ == "__main__":
    main()
