# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic

GLOBAL_CONSTANT = "I'm a liar, I'm not a constant"


def main():
    friends = {'Giovanni': 'squillero@polito.it', 'Mick': 'jagger@rollingstones.com'}
    friends[(23, 10)] = 'Giovanni'
    friends[42] = ['Meaning', 'of', 'Life']
    print(friends['Giovanni'])

    friends[42].extend(['Universe', 'Everything Else'])
    ic(friends)

    # del friends[42]
    # ic(friends)
    del friends[42][3]
    ic(friends[42])

    ic(friends.keys())
    ic(friends.values())
    ic(friends.items())

    for f in friends:
        print(f"{f} -> {friends[f]}")

    for v in friends.values():
        print(f"? -> {v}")

    for f, v in friends.items():
        print(f"{f} -> {v}")

    bag = set()
    bag.add('bread')
    bag.add('milk')
    bag.add('eggs')
    ic(bag)
    bag -= {'milk'}
    bag -= {'milk'}
    bag -= {'milk'}
    bag -= {'milk'}
    bag -= {'milk'}
    ic(bag)

    foo = dict()

    # say sorry
    try:
        ic(foo[42])
    except KeyError:
        ic('?')

    # ask permission
    if 42 in foo:
        ic(foo[42])
    else:
        ic('?')

    # read the manual
    ic(foo.get(42, '?'))


if __name__ == '__main__':
    main()
