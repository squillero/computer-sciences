# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

NUMBERS = 'numbers.txt'
AMSTRONG_NUMBERS = 'armstrong.txt'


def armstrong(number):
    return number == sum(int(d)**len(str(number)) for d in str(number))


def main():
    try:
        with open(NUMBERS) as fin, open(AMSTRONG_NUMBERS, 'w') as fout:
            for number in fin.readlines():
                if armstrong(int(number)):
                    fout.write(f"{int(number)}\n")
    except OSError as err:
        print(f"Yeuch: {err}")


if __name__ == "__main__":
    main()
