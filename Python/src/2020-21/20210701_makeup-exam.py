# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

DATAFILE = '20210701_wines.dat'


def read_file(filename):
    data = dict()
    try:
        with open(filename) as input_file:
            for line in input_file.readlines():
                region, wines = line.split(':')
                for wine in wines.split(','):
                    wine = wine.strip(' \n')
                    if wine not in data:
                        data[wine] = set([region])
                    else:
                        data[wine].add(region)
    except OSError:
        print("Yeuch!")
    return data


def main():
    wines = read_file(DATAFILE)
    for wine in sorted(wines):
        print(f"{wine}: {', '.join(sorted(wines[wine]))}")


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    main()