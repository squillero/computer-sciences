# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

TONES_FILENAME = "20240109 notes.dat"


def read_tones(filename):
    index = dict()
    data = list()

    with open(filename) as data_in:
        try:
            for line in data_in:
                name, tone = line.split(";")
                index[name] = len(data)
                data.append(float(tone))
        except OSError as problem:
            exit(problem)
        return index, data


def main():
    index, data = read_tones(TONES_FILENAME)
    index["E#"] = index["F"]
    index["B#"] = index["C"]
    print(index)
    print(data)


if __name__ == "__main__":
    main()
