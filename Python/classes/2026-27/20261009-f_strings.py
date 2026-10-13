# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

val = 42
print(f"{val} of type: {type(val)}")
print(f"{2**val}")

val = 7 / 3
print(f"The value is {val}")
print(f"The value is {val:.3f}")
print(f"The value is {val:10.4e}")
print(f"The value is {val:20.4e}")
print(f"The value is {val:020.4e}")

val = 2**23
print(f"{val:,}")

val = "Giovanni"
print(f">>{val}<<")
print(f">>{val:30}<<")
print(f">>{val:<30}<<")
print(f">>{val:>30}<<")
print(f">>{val:^30}<<")
