# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

# Useful when debugging
# from pprint import pprint

FILENAME_RULES = 'rules-example1.dat'
FILENAME_DATES = 'dates-example1.dat'
# FILENAME_RULES = 'rules-example2.dat'
# FILENAME_DATES = 'dates-example2.dat'
# FILENAME_RULES = 'rules.dat'
# FILENAME_DATES = 'dates.dat'


def string_to_date(string):
    """Converts a date string 'd-m-y' into a tuple (y, m, d)"""
    d, m, y = string.split('-')
    return int(y), int(m), int(d)


def read_ruels(filename):
    """Reads `filename` and returns a list of tuples (date, add, sub), where 
    * `date` is a tuple (y, m, d)
    * `add` is the set of the rules enforced in that specific day
    * `sub` is the set of the rules lifted in that specific day
    """
    rules = list()
    try:
        with open(filename) as rules_in:
            for line in rules_in:
                date_raw, rlist = line.split(':')
                date = string_to_date(date_raw)
                r_add, r_del = list(), list()
                for r in rlist.split():
                    if r[0] == '+':
                        r_add.append(r[1:])
                    elif r[0] == '-':
                        r_del.append(r[1:])
                rules.append((date, set(r_add), set(r_del)))
    except OSError as problem:
        print(f"OSError: {problem}")
        return list()
    return rules


def get_active_rules(rules, day):
    """Plays elements in `rules` keeping track of enforced/lifted rules up to `day`"""
    active = set()
    for d, ra, rd in rules:
        if d <= day:
            active |= ra
            active -= rd
        else:
            break
    return active


def main():
    """Standard entry point"""
    rules = read_ruels(FILENAME_RULES)
    try:
        raw_dates = open(FILENAME_DATES).read().split()
    except OSError as problem:
        print(f"OSError: {problem}")
        exit(1)
    for d in raw_dates:
        day = string_to_date(d)
        print(f"{d}:")
        for r in sorted(get_active_rules(rules, day)):
            print(f"{r}")
        print()


# Boilerplate code
if __name__ == '__main__':
    main()
