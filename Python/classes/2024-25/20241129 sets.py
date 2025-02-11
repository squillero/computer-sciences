# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    friends = set()
    friends.add('Giovanni')
    friends.add('Adolfo')
    friends.add('Pietro')
    friends.add('Pio')
    friends.add('Giovanni')

    print(friends)
    print(tuple(friends))

    for x in enumerate(friends):
        print(x)


if __name__ == '__main__':
    main()
