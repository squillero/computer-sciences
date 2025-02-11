# Copyright © 202324 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


RULES_FILENAME = "20240112 rules.dat"

from pprint import pprint


def read_rules(filename):
    """gets [(day, ({rules add}, {rules removed}))]"""
    day_rules = list()
    try:
        with open(filename) as input_file:
            for line in input_file:
                date, rules = line.split(":")
                add = set()
                remove = set()
                for rule in rules.split():
                    if rule[0] == "+":
                        add.add(rule[1:])
                    elif rule[0] == "-":
                        remove.add(rule[1:])
                    else:
                        assert False, f"Yeuch: {rule}"
                day_rules.append(
                    (string_to_date(date), (add, remove))
                )

    except OSError as problem:
        exit(problem)
    return sorted(day_rules)


def string_to_date(string):
    d, m, y = string.split("-")
    return int(y), int(m), int(d)


def current_rules(date, rules_list):
    current_ruleset = set()
    index = 0
    while index < len(rules_list) and rules_list[index][
        0
    ] < string_to_date(date):
        day, rules = rules_list[index]
        current_ruleset = current_ruleset.union(rules[0])
        current_ruleset = current_ruleset.difference(rules[1])
        print(f"{day}: {current_ruleset}")
        index += 1

    return current_ruleset


def main():
    rules = read_rules(RULES_FILENAME)
    pprint(rules)
    current_rules("2-3-2021", rules)


if __name__ == "__main__":
    main()
