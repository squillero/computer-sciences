# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint


def main():
    birthdays = [
        ["Mr. Blue", 1980],
        ["Mr. Pink", 1970],
        ["Mr. Green", 1990],
    ]
    birthdays_sorted = sorted(birthdays, key=lambda b: b[1])
    pprint(birthdays_sorted)


if __name__ == "__main__":
    main()
