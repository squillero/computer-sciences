# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from random import choice

dna = str.join("", [choice(list("ACTG")) for _ in range(20_000_000)])
gene = str.join("", [choice(list("ACTG")) for _ in range(10)])

#print(dna)
print(f"Looking for: {gene}")

num_found = 0
pos = 0
while pos >= 0:
    pos = dna.find(gene, pos)
    if pos >= 0:
        pos = pos + 1
        num_found = num_found + 1
        print(f"Whoa! Found at position {pos:,}")
print(f"Gene [{gene}] found {num_found:,} times")
