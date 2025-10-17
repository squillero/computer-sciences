# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

foo = 42
bar = "I love f-strings!"
print(f"Zap {foo} Zop")

num = 1 / 3
print(f"1/3 is {num + 2 / 3 == 1.0}")

# floating point
print(f"1/3 is {1/3:.2}")  # precision
print(f"1/3 is {1/3:10.5}")  # precision + size padded with blanks
print(f"1/3 is {1/3:010.5}")  # precision + size padded with 0
print(f"1/3 is {1/3:.2f}")  # precision + format
print(f"1/3 is {1/3:.2e}")  # precision + format (scientific notation)

print(f"1/3 is {42:f}")  # precision + format (dot)
print(f"1/3 is {42:e}")  # precision + format (scientific notation)
print(f"1/3 is {42:g}")  # generic notation
print(f"1/3 is {42/3.2:g}")  # generic notation
print(f"1/3 is {2**64:g}")  # generic notation

# integer
print(f"{2**4321:,}")

# string
print(f"|{'bob':20s}|")
print(f"|{'bob':<20s}|")
print(f"|{'bob':>20s}|")
print(f"|{'bob':^20s}|")
