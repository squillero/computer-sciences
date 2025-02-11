# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

ERROR = "Interstellar"
FILE_IN = "20241122 movies.gx"
FILE_OUT = "20241122 movies2.gx"


def main():
    try:
        with open(FILE_IN) as file_in, open(FILE_OUT, 'w') as file_out:
            for line in file_in:
                line = line.rstrip()
                if line != ERROR:
                    file_out.write(line)
                    file_out.write('\n')
    except OSError:
        line = None


if __name__ == '__main__':
    main()
