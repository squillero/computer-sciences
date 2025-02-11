# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE' for details.


INPUT_FILE = 'expressions_long.dat'


def operation(op, a, b):
    r"""Performs single operation"""
    if op == '+':
        return a + b
    if op == '-':
        return a - b
    if op == '*':
        return a * b


def evaluate_expression(numbers, operators):
    r"""Evaluates the expression represented as two separate lists"""
    numbers = numbers[::-1]
    for op in operators:
        numbers.append(operation(op, numbers.pop(), numbers.pop()))
    return numbers[0]


def read_expression(filename):
    r"""Returns a list of expressions as pairs (nums, ops)"""
    expressions = list()
    try:
        with open(filename) as file:
            for line in file:
                part_1, part_2 = line.split(':')
                nums = list()
                for t in part_1.split():
                    nums.append(int(t))
                ops = part_2.split()
                expressions.append((nums, ops))
    except OSError as problem:
        exit(problem)
    return expressions


def main():
    for nums, ops in read_expression(INPUT_FILE):
        print(evaluate_expression(nums, ops))


if __name__ == '__main__':
    main()
