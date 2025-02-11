# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

COURSE_DIRECTORY = '20211210_courses.lst'


def get_courses():
    """Returns the lisrt of courses"""
    courses = list()
    try:
        with open(COURSE_DIRECTORY) as input_file:
            for line in input_file:
                courses.append(line.strip())
    except OSError as error:
        print(f"Error reading course directory: {error}")
        courses = []
    return courses


def update_students(students, course):
    filename = f"20211210_{course}.txt"
    try:
        with open(filename) as course_file:
            for line in course_file:
                student_id, grade = line.split()
                if student_id not in students:
                    students[student_id] = list()
                students[student_id].append((course, grade))
    except OSError as error:
        print(f"Yeuch: {error}")


def main():
    # student id -> list of (course, result)
    students = dict()
    courses = get_courses()
    for course in courses:
        update_students(students, course)
    pprint(students)


if __name__ == '__main__':
    main()
