# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE' for details.


INPUT_FILE = 'reports_small.dat'
OUTPUT_FILE = 'correct-reports.dat'


def read_reports(filename):
    r"""Reads reports as a list of lists"""
    reports = list()
    try:
        with open(filename) as file:
            for line in file:
                rep = list()
                for level in line.split():
                    rep.append(int(level))
                reports.append(rep)
        return reports
    except OSError as problem:
        exit(problem)


def write_reports(reports, filename):
    r"""Reads reports as a list of lists"""
    try:
        with open(filename, 'w') as file:
            for rep in reports:
                for level in rep[:-1]:
                    file.write(f"{level} ")
                file.write(f"{rep[-1]}\n")
    except OSError as problem:
        exit(problem)


def check_report_safety(report):
    r"""Test wether `report` is safe"""
    if report != sorted(report) and report != sorted(report, reverse=True):
        return False
    for e1, e2 in zip(report, report[1:]):
        if abs(e1 - e2) < 1 or abs(e1 - e2) > 3:
            return False
    return True


def main():
    all_reports = read_reports(INPUT_FILE)
    correct_reports = list()
    for report in all_reports:
        if check_report_safety(report):
            correct_reports.append(report)
    write_reports(correct_reports, OUTPUT_FILE)

    print(f"Read {len(all_reports)} reports: {len(correct_reports)/len(all_reports):.2%} correct")


if __name__ == '__main__':
    main()
