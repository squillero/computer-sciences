# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

string = input()

# A 1-line solution using list comprehension (and a generator)
print("\n".join(string[a:a + b + 1] for b in range(len(string)) for a in range(len(string) - b)))
