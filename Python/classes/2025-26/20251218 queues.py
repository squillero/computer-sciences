# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

DESCRIPTION = 'queue-large.txt'


def read_problem(filename):
    """Insightful description"""

    try:
        with open(filename) as file:
            rules_raw, queues_raw = file.read().split('\n\n')
    except OSError:
        print("Yeuch")
        exit(1)

    rules = set()
    for line in rules_raw.split():
        b, a = line.split('|')
        rules.add((int(b), int(a)))
    queues = list()
    for line in queues_raw.split():
        tmp = list()
        for page in line.split(','):
            tmp.append(int(page))
        queues.append(tmp)

    return rules, queues


def main():
    rules, queues = read_problem(DESCRIPTION)

    checksum = 0
    for queue in queues:
        correct_update = True
        for i, page in enumerate(queue):
            for pred in queue[:i]:
                if (page, pred) in rules:
                    correct_update = False

        if correct_update:
            # print(queue)
            middle = queue[len(queue) // 2]
            # print(middle)
            checksum += middle
    print(checksum)


if __name__ == '__main__':
    main()
