# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from csv import DictReader
from icecream import ic

CHARACTERS_FILE = '20241220 guess_who - characters.txt'
QUESTIONS_FILE = '20241220 guess_who - questions1.txt'


def read_characters(filename):
    characters = dict()
    try:
        with open(filename, newline='') as file:
            for c in DictReader(file, delimiter=';'):
                name = c['Name']
                del c['Name']
                characters[name] = c
    except OSError as problem:
        exit(problem)
    return characters


def read_questions(filename):
    questions = list()
    try:
        with open(filename) as file:
            for line in file:
                q, a = line.split('=')
                questions.append((q.strip(), a.strip()))
    except OSError as problem:
        exit(problem)
    return questions


def filter_character(characters, key, value):
    r"""Filter out characters if key != value"""
    filtered = dict()
    for name, props in characters.items():
        if key not in props or props[key] == value:
            filtered[name] = props
    return filtered


def print_character(name, props):
    p = list()
    for k, v in sorted(props.items()):
        p.append(f"{k}: {v}")
    print(f"{name} - {', '.join(p)}")


def main():
    characters = read_characters(CHARACTERS_FILE)
    print("Game characters:")
    for n, p in characters.items():
        print_character(n, p)

    questions = read_questions(QUESTIONS_FILE)
    for n, q in enumerate(questions):
        k, v = q
        characters = filter_character(characters, k, v)
        print()
        print(f"Step {n+1} - question: {k} = {v}")
        print("Selected characters:")
        for n, p in characters.items():
            print_character(n, p)


if __name__ == '__main__':
    main()
