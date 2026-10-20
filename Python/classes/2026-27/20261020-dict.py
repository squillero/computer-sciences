# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

data = dict()
data["Squillero"] = "Giovanni"
data["Lennon"] = "John"
data["McCartney"] = "Paul"
data["Harrison"] = "George"
data["Starr"] = "Ringo"

# print(data)
print(data["Lennon"])

key = "Bowie"
if key not in data:
    print("Yeuch")
else:
    print(data[key])

# loop keys (acceptable)
print("=" * 78)
for key in data:
    print(f"Key: {key} -> Value: {data[key]}")

# loop keys 2 (acceptable, but rarely used)
print("=" * 78)
for key in data.keys():
    print(f"Key: {key} -> Value: {data[key]}")

# loop values (ok if needed)
print("=" * 78)
for val in data.values():
    print(f"Value: {val}")

# loop values (ususally the best)
print("=" * 78)
for key, val in data.items():
    print(f"Key: {key} -> Value: {val}")

# sorted by key
print("=" * 78)
for key in sorted(data):
    print(f"Key: {key} -> Value: {data[key]}")

# sorted by key
print("=" * 78)
del data["Squillero"]
for key in data:
    print(f"Key: {key} -> Value: {data[key]}")
