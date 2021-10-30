# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

# string = input()
string = 'VanaTallinn'

# A 1-line solution using list comprehnesion (and a generator)

print("\n".join(string[a:a + b]
                for b in range(1,
                               len(string) + 1)
                for a in range(len(string) - b + 1)))
