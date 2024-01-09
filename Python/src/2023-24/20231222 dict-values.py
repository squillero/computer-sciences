# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint


def look_for_first_value(data, value):
    """Returns the first key associated with `value`"""
    for k, v in data.items():
        if v == value:
            return k
    return None


def look_for_all_values(data, value):
    """Returns the set of all keys associated with `value`"""
    keys = set()
    for k, v in data.items():
        if v == value:
            keys.add(k)
    return keys


def main():
    my_data = dict()

    text = "My name is Bond, James Bond."
    for char in text:
        if char not in my_data:
            my_data[char] = 0
        my_data[char] += 1

    for value in range(5):
        keys = look_for_all_values(my_data, value)
        if keys:
            print(f"{str(keys):.<70s} {value}")

    # print the 3 more common runes
    tmp_data = sorted(
        my_data.items(), key=lambda t: t[1], reverse=True
    )
    for t in tmp_data[:3]:
        print(f"'{t[0]}' -> {t[1]}")


if __name__ == "__main__":
    main()
