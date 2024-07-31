# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

print("Enter your votes, end with -1")

sum_ = 0  # standard way for NOT shadowing a common name (or using a reserved keyword)
num = 0

finished = False
while not finished:  # handling sentinel: extra variable
    vote = int(input(":"))
    if vote < 0:
        finished = True
    else:
        sum_ = sum_ + vote
        num = num + 1
if not num:  # that is: num == 0 or something else
    print("D'ho!?")
else:
    print(f"{num} votes, average is {sum_/num:.1f}")
