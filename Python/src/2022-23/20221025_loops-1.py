# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

for t in range(10, 0, -1):
    print(f"{t:02}")
print(f"KABOOOOM!")

for letter in "Giovanni Adolfo Pietro Pio":
    print(ord(letter), end=' ')
print()

name = "Giovanni Adolfo Pietro Pio"
for i in range(0, len(name), 2):
    print(f"{name[i:i+2]}", end='|')
print()


for t in range(10, 0, -1):
    if t == 666:
        break
    print(f"{t:02}")
else:
    print(f"KABOOOOM!")

n = 4242
while n > 1:
    print(n)
    if n == 42:
        print("That's the answer!")
        break
    if n % 2 == 0:
        n = n // 2
    else:
        n = n * 3 + 1
else:
    print(n)

for c in "Giovanni Adolfo Pietro Pio":
    if c.lower() in "aeiou":
        continue
    print(f"{c} -> {ord(c)}")
