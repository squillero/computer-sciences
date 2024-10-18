# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

kpops = [
    "BTS",
    "BLACKPINK",
    "EXO",
    "TWICE",
    "SEVENTEEN",
    "Red Velvet",
    "NCT",
    "Stray Kids",
    "ITZY",
    "ENHYPEN",
]

for band in kpops:
    print(f"\"{band}\"")

# note: *really* terrible, but you don't know anything better, yet
for i in range(len(kpops)):
    print(f"{i+1:2d}. \"{kpops[i]}\"")

# from icecream import ic
# ic(kpops)
# ic(len(kpops))
# ic(range(len(kpops)))
