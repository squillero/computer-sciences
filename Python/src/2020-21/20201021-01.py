# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

foo = 4
bar = 2

print("The answer is \"{foo*10 + bar:10d}\"")
print(f"The answer is \"{foo*10 + bar:10d}\"")
print("The answer is", foo * 10 + bar)

s1 = f"{foo*10 + bar}"
s2 = f"{foo*10 + bar:e}"
s3 = f"{foo*10 + bar:20.4f}"

print(s1)
print(s2)
print(s3)

print(f"{round(2/3):d}")
