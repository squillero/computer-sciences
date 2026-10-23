# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

# ANIMAL
# Number of legs
# Color
# Name
# Life expectancy

from ast import Pass

man = (4, "varies", "human", 80)
tardigrade = (8, "grey", "Tardigrade", 2.5)
db = dict()
db["Bob"] = man
db["Carl"] = tardigrade

db["Bob"][0]

for key in db:
    ...  # I'l ldo blah blah blah

if not db:  # if the db is empty
    pass
