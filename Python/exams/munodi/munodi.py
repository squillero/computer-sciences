# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

INPUT_FILE_NAME = 'seq.dat'
#INPUT_FILE_NAME = 'seq_long.dat'


def munodi(num):
    c = [num]
    while num > 1:
        if num % 2 == 0:
            num = num // 2
        else:
            num = num * 3 + 1
        c.append(num)
    return c


def get_sequences(file_name):
    sequences = list()
    try:
        with open(file_name) as input_file:
            for line in input_file:
                seq = list()
                for elem in line.split():
                    seq.append(int(elem))
                sequences.append(seq)
    except OSError as problem:
        print(f"Yeuch, we have a problem: {problem}")
    return sequences


def main():
    sequences = get_sequences(INPUT_FILE_NAME)
    for num, seq in enumerate(sequences):
        if seq == munodi(seq[0]):
            print(f"Sequence {num+1} is a Munodi sequence (length {len(seq)})")
        else:
            print(f"Sequence {num+1} is NOT a Munodi sequence")


if __name__ == '__main__':
    main()