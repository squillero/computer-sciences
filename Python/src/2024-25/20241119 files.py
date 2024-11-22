# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILE_IN = '20241119 in.gx'
FILE_OUT = '20241119 out.gx'
TABOOS = ['lady', 'stairway']


def main():
    try:
        with open(FILE_IN) as file_in:
            text = file_in.read()
    except OSError as problem:
        exit(problem)

    redacted_text = text
    for taboo in TABOOS:
        redacted_text = redacted_text.replace(taboo, '***')

    try:
        with open(FILE_OUT, 'w') as file_out:
            file_out.write(redacted_text)
    except OSError as problem:
        exit(problem)


if __name__ == '__main__':
    main()
