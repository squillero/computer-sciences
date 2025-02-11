# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

#
###
#####


def pine(height):
    for l in range(height):
        pine_line(height - l - 1, 2 * l + 1)


def pine_line(white_spaces, hashes):
    # print(" " * white_spaces, "#" * hashes, sep='')
    # print(" " * white_spaces + "#" * hashes)
    # print(f"{' ' * white_spaces}{'#' * hashes}")
    print(f"""{" " * white_spaces}{"#" * hashes}""")


height = int(input("Pine height: "))
pine(height)
