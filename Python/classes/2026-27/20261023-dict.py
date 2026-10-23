# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

birthdays = dict()

birthdays["Giovanni"] = (23, 10)
birthdays["Paola"] = (18, 5)

print(birthdays.get("Giovanni"))
print(birthdays.get("Adolfo", (0, 0)))
