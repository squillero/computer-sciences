# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

from random import randint


def main():
    """Main entry point"""

    num_scores = int(input("Number of scores: "))
    scores = []
    for i in range(num_scores):
        scores.append(randint(1, 30))

    new_scores = remove_lowest(scores)
    average = compute_average(new_scores)
    print(f"Original scores: {scores}, removing lowest: {new_scores}, average: {average}")


def remove_lowest(scores):
    """Remove lowest score from list and return it"""
    pos = 0
    tmp_scores = list(scores)
    for i, v in enumerate(tmp_scores):
        if v < tmp_scores[pos]:
            pos = i
    tmp_scores.pop(pos)
    return tmp_scores


def compute_average(scores):
    """Return average of list"""
    sum_ = 0.
    for s in scores:
        sum_ = sum_ + s
    return sum_ / len(scores)


if __name__ == '__main__':  # BLACK MAGIC!
    main()
