# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

def main():
    abook = dict()
    abook['giovanni'] = 'giovanni.squillero@polito.it'

    key = 'paola'
    if key not in abook:
        print("Yeuch")
    else:
        print(abook[key])

    try:
        value = abook[key]
    except KeyError:
        value = 'Yeuch'
    print(value)


if __name__ == '__main__':
    main()