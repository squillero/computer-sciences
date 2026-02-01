# Copyright © 2026 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from icecream import ic


REPORT_FILENAME = 'report-small.txt'


def read_report(filename):
    """Read the report, split the two blocks"""
    try:
        with open(filename) as file:
            ranges_raw, batches_raw = file.read().split('\n\n')
    except OSError as problem:
        print(problem)
        exit(1)
    dangerous_ranges = list()
    for block in ranges_raw.split():
        from_, to = block.strip().split('-')
        dangerous_ranges.append((int(from_), int(to)))
    batches = list()
    for batch in batches_raw.split():
        batches.append(int(batch))
    return dangerous_ranges, batches


def main():
    dangerous_ranges, batches = read_report(REPORT_FILENAME)
    for batch in batches:
        for from_, to in dangerous_ranges:
            if from_ <= batch <= to:
                print(batch)
                break


if __name__ == '__main__':
    main()
