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
                student_names[id] = (rec['Surname'], rec['Name'])
                del rec['STUDENT_ID'], rec['Name'], rec['Surname']
                grades = list()
                for v in rec.values():
                    if v == '30L':
                        grades.append(32)
                    elif v:
                        grades.append(int(v))
                if not grades:
                    grades.append(0)
                student_grades[id] = grades
    except OSError as problem:
        exit(problem)
    return student_names, student_grades


def main():
    names, grades = read_data(FILENAME)

    def super_smart_mapping(id):
        return names[id]

    for id in sorted(names, key=super_smart_mapping):
        print(
            f"{names[id][0] + ' ' + names[id][1]:<24} {id:<10}: {sum(grades[id])/len(grades[id]):.2f}"
        )

    avgs = list()
    for id in grades:
        avgs.append(sum(grades[id]) / len(grades[id]))
    print(f"Highest average grade: {max(avgs):.2f}")
    print(f"Lowest average grade: {min(avgs):.2f}")

    for id in grades:
        if sum(grades[id]) / len(grades[id]) > 23:
            print(' '.join(names[id]))

    grades = list()
    for id in grades:
        grades.extend(grades[id])
    print(f"Highest grade: {max(avgs):.2f}")
    print(f"Lowest grade: {min(avgs):.2f}")

if __name__ == '__main__':
    main()
