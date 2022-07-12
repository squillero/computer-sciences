# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

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
