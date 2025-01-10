# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from csv import DictReader

FILENAME = '20250110 university.csv'


def read_data(filename):
    student_names = dict()
    student_grades = dict()
    try:
        with open(filename, newline='') as file:
            for rec in DictReader(file):
                id = rec['STUDENT_ID']
                student_names[id] = (rec['Name'], rec['Surname'])
                del rec['STUDENT_ID'], rec['Name'], rec['Surname']
                grades = list()
                for v in rec.values():
                    if v == '30L':
                        grades.append(32)
                    elif v:
                        grades.append(int(v))
                student_grades[id] = grades
    except OSError as problem:
        exit(problem)
    return student_names, student_grades


def main():
    names, grades = read_data(FILENAME)
    print(grades)


if __name__ == '__main__':
    main()
