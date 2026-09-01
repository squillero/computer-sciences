# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

PATTERN = "pattern.txt"
WORDS = "words.txt"


def calculate_score(word, pattern):
    count = 0
    for i in range(len(pattern)):
        if pattern[i : i + len(word)] == word:
            count += 1
    return count * len(word)


def main():
    try:
        with open(PATTERN) as file:
            pattern = file.read().strip()
    except OSError:
        exit("Yeuch")

    try:
        with open(WORDS) as file:
            words = file.read().split()
    except OSError:
        exit("Yeuch")

    scores = set()
    results = list()
    for w in words:
        s = calculate_score(w, pattern)
        if s not in scores:
            scores.add(s)
        else:
            s = 0
        results.append((s, w))

    for s, w in sorted(results, reverse=True):
        if s > 0:
            print(f"{w}: {s}")


if __name__ == "__main__":
    main()
