# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint

data = dict()
data["giovanni"] = [23, 10]
data["furkan"] = [16, 9]
data["paola"] = [18, 5]
data["giovanni"] = [7, 7]
data["luca"] = [7, 1]
data["alvi"] = [12, 10]
data["iris"] = [12, 10]
data["muhammadmahdi"] = [21, 8]

pprint(data)
print()
pprint(list(data.keys()))
pprint(list(data))
print()
pprint(list(data.values()))
print()
pprint(list(data.items()))
print()
del data['giovanni']
pprint(list(data.items()))
print()
print()
for key, value in data.items():
    print(f"data[{key!r}] => {value!r}")
