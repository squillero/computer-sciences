# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions; see LICENSE for details.

str_ = "Giovanni Adolfo Pio Pietro Squillero"
list_ = list(str_)
tuple_ = tuple(str_)

foo = "foo"
bar = "bar"
bar, foo = foo, bar # implicit packing/unpacking through tuple

print(str_)
print(str_[7])
print(str_[7:13])
print(str_[:13])
print(str_[7:])
print(str_[7:13:2])
print(f"'{str_[13:7:-1]}'")
print(f"{str_[13:7:-2]}")

numbers = list(range(20))
print(numbers)
print(numbers[::-1])

print("-" * 78)
print(numbers)
numbers.reverse()
print(numbers)

print("-" * 78)
numbers2 = tuple(range(20))
print(numbers2)
numbers2 = reversed(numbers2)
print(numbers2)
print(list(numbers2))

print("-" * 78)
name = "Giovanni Adolfo"
print(name)
sorted_list1 = sorted(name)
sorted_list2 = sorted(list(name))
sorted_list3 = list(name)
sorted_list3.sort()
print(sorted_list1)
print(sorted_list2)
print(sorted_list3)

assert sorted_list1 == sorted_list2
assert sorted_list2 == sorted_list3

print("-" * 78)
print(23 in [18, 5, 23, 10])
print(23 in (18, 5, 23, 10))
print("zap" in "jdhgdjgdj_zap_dfgbdjkg")

