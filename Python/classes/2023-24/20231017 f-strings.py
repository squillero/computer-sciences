# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# numbers
foo = 1 / 3
print(f"{foo}")
print(f"10-digit float: |{foo:10.2f}|")
print(f"10-digit float: |{foo:<10.2f}|")
print(f"{foo:.3}")

# strings
foo = "Giovanni"
print(f"|{foo:60}|")
print(f"|{foo:<60}|")
print(f"|{foo:>60}|")
print(f"|{foo:^60}|")
