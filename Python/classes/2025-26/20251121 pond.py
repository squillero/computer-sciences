# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

OLD_POND = '20251121 pond.txt'


def read_file(filename):
    try:
        with open(filename, encoding='utf8') as elwood:
            content = elwood.read()
    except OSError as error:
        print(f"Yeuch: {error}")
        content = ''
    return content


def read_binary_file(filename):
    try:
        with open(filename, 'rb') as elwood:
            content = elwood.read()
    except OSError as error:
        print(f"Yeuch: {error}")
        content = None
    return content


def main():
    text = """古池や
蛙飛び込む
水の音"""
    # print(text)

    poem = read_binary_file(OLD_POND)
    print(poem)
    poem = read_file(OLD_POND)
    print(poem)


if __name__ == '__main__':
    main()
