# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

INPUT_FILE = '20211209_input.gx'
OUTPUT_FILE = '20211209_output.gx'


def main():
    try:
        with open(INPUT_FILE) as input_, open(OUTPUT_FILE, 'w') as output:
            for index, line in enumerate(input_):
                output.write(f"/*{index+1}*/ {line}")
    except OSError as error:
        print(f"Yeuch, we had a problem: {error}")


if __name__ == '__main__':
    main()
