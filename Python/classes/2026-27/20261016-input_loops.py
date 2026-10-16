# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

# Option 1
user = input("> ")
while user:  # that is `user != ""`
    ...
    user = input("> ")  # bad: duplicated line

# Option 2
user = "!"
while user:
    user = input("> ")
    ...

# Option 3 -- best for general use
completed = False
while not completed:
    user = input("> ")
    if not user:
        completed = True
    ...

# Option 99 -- for mature programmers only
while user := input("> "):
    ...
