# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.


def condition(num):
    return num % 5 == 0


def make_sequence(number):
    sequence = [number]
    while number > 1:
        if number % 2 == 0:
            number = number // 2
        else:
            number = number * 3 + 1
        sequence.append(number)
    return sequence


def main():
    number = int(input("Starting number: "))
    sequence = make_sequence(number)
    print(sequence)

    first = None
    last = None
    count = 0
    for i, n in enumerate(sequence):
        if condition(n):
            count += 1
            last = i
            if first is None:
                first = i
    if first is not None and count == 1:
        print(f"Whoa! found 1 match at position {first}")
    elif first is not None:
        print(f"Whoa! found {count} matches: first at position {first}, last at position {last}")
    else:
        print("Yeuch, no matches found")


if __name__ == '__main__':
    main()
