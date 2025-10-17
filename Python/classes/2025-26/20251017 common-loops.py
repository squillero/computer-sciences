# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

num = 0
total_sum = 0
max_ = None
min_ = None

number_of_elements = 0
while num >= 0:
    num = int(input("Number: "))
    # Not really nice
    if num < 0:
        continue
    total_sum += num
    number_of_elements += 1
    if max_ is None or num > max_:
        max_ = num
    if min_ is None or num < min_:
        min_ = num

# patching is an alternative
# total_sum -= num
# number_of_elements -= 1
print(f"The average is: {total_sum/number_of_elements:.2f}")
print(f"The max is: {max_}")


print("Goodbye...")
