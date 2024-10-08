# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

print(42)
print("Hello")

# print(2. ** 128)
# print()
# print(2 ** 128)

# Not really "2" but something close
print((2**0.5) ** 2)

# f-string -- https://docs.python.org/3/reference/lexical_analysis.html#f-strings
print(7)
print(f"XX{7:4}XX")

x = 42
y = 7
print(f"|x={x}|y={y}|")
# print(f"|x={x:4}|y={y:4}|")

name = "Giovanni"
month = 10
day = 23
print(f"{name} is born on {day}-{month}")
# Padding strings
print(f"{name:40} is born on {day}-{month}")
# Padding numbers
print(f"{name:40} is born on {day:10}-{month}")
print(f"{name:40} is born on {day}-{month:10}")
# Change padding
print(f"{name:<40} is born on {day}-{month}")
print(f"{name:>40} is born on {day}-{month}")
print(f"{name:^40} is born on {day}-{month}")

# Floating-point format
num = 2**0.5
print(num)
print(f"{num:.2f}")

num = 123456.123456
print(f"{num:20.2f}")
print(f"{num:20.2e}")
print(f"{num:20.2g}")
print(f"{num:020.2e}")
print(f"{num:+020.2e}")

print(f"{2**64:f}")
print(f"{2**64:e}")
print(f"{2**64:g}")

print(f"{2**4:d}")  # Integer decimal
print(f"{2**4:f}")  # Fixed-size floating-point
print(f"{2**4:e}")  # Fixed-size floating-point in exp format
print(f"{2**4:g}")  # Cool format

num = 123456.123456
num_s = f"{num:.2f}"
