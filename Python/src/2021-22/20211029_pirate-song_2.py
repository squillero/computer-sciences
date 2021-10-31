# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

string = input()

# A 1-line solution using list comprehension (and a generator)
print("\n".join(string[a:a + b + 1] for b in range(len(string)) for a in range(len(string) - b)))
