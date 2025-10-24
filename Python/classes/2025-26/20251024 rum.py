# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# RUM

# R
# U
# M

# RU
# UM

# RUM


def main():
    word = input("Word: ")
    for outer in range(len(word)):
        for inner in range(len(word) - outer):
            print(outer, inner, word[inner : inner + outer + 1])


main()
