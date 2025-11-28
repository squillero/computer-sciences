# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    stones = {
        'Jagger': 'Mick',
        'Richards': 'Keith',
        'Wood': 'Ronnie',
        'Jones': 'Brian',
        'Stewart': 'Ian',
        'Wyman': 'Bill',
        'Watts': 'Charlie',
        'Taylor': 'Mick',
    }

    for name in stones:
        print(name)

    for name in stones:
        print(name, stones[name])

    for name in stones.keys():
        print(name)

    for name in stones.values():
        print(name)

    for item in stones.items():
        print(item)

    # cool
    for surname, name in stones.items():
        print(name, surname)

    for pos, sorted_surname in enumerate(sorted(stones)):
        print(pos + 1, sorted_surname)

    print(min(stones), max(stones))


if __name__ == '__main__':
    main()
