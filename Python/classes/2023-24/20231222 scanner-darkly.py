# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

WIRETAP_FILENAME = "20231222 wiretap.txt"
CENSORED_FILENAME = "20231222 censored.txt"


def read_wiretap(filename):
    try:
        with open(filename, encoding="utf-8") as file_in:
            whole_file = file_in.readlines()
    except OSError:
        whole_file = list()
    return whole_file


def find_lines(transcript, taboo_words):
    hits = list()
    for line_num, line_content in enumerate(transcript):
        if set(line_content.split()) & taboo_words:
            hits.append(line_num)
    return hits


def save_uncensored_lines(transcript, dangerous_lines):
    try:
        with open(
            CENSORED_FILENAME, "w", encoding="utf-8"
        ) as file_out:
            for line_number, line in enumerate(transcript):
                if line_number not in dangerous_lines:
                    file_out.write(line)
    except OSError as problem:
        exit(problem)


def main():
    transcript = read_wiretap(WIRETAP_FILENAME)
    dangerous_lines = set()
    for line in find_lines(transcript, {"bob", "arctor"}):
        dangerous_lines |= {line, line + 1, line - 1}
    save_uncensored_lines(transcript, dangerous_lines)
    police_lines = find_lines(transcript, {"polizia"})
    bob_lines = find_lines(transcript, {"bob", "arctor"})

    distances = list()
    for p in police_lines:
        for b in bob_lines:
            distances.append(abs(p - b))
    if distances:
        print(f"Min distance: {min(distances)}")
    else:
        print(f"The words are never pronounced together")


if __name__ == "__main__":
    main()
