# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    friends = dict()
    friends['Giovanni'] = (23, 10)
    friends['Paola'] = (18, 5)
    friends['Karam'] = (21, 10)
    friends['Fabrizio'] = (12, 5)
    friends['Defne'] = (21, 8)

    for f in friends.keys():
        print(f"Oh, I like {f}!")

    for v in friends.values():
        print(f"Oh, I like people born in {v}!")

    for f, v in friends.items():
        print(f"Oh, I like my friend {f} born in {v}!!!")

    for f in friends:
        print(f"Oh, I like {f}!")

    # not quite terrible
    for f in friends:
        print(f"Oh, I like my friend {f} born in {friends[f]}!!!")


if __name__ == '__main__':
    main()
