# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def simple():
    """Don't do it!"""
    gaga = open('20241115 song.txt')
    text = gaga.read()
    gaga.close()
    return text


def smart():
    """Correct way to open/close a file"""
    try:
        with open('20241115 song2.txt') as gaga:
            text = gaga.read()
    except OSError as problem:
        # print(f"Yeuch, we have a problem: {problem}")
        # text = None
        exit(problem)
    return text


def main():
    print(smart())


if __name__ == '__main__':
    main()
