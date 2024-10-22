# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

my_list = [23, 10, "Giovanni", 18, 5, "Paola"]
print(my_list[2][-1])

my_list[2] = "Giovanni Adolfo Pietro Pio"
print(my_list)

# TUPLE
my_tuple = (23, 10, "Giovanni", 18, 5, "Paola")


brithday = (23, 10)
print(brithday[0], brithday[1])

empty_tuple = tuple()

one_element_tuple = (42,)
one_element_tuple_2 = tuple([42])

# m = int(input("month: "))
# d = int(input("day: "))
# date = (m, d)

from icecream import ic

ic("Jake")
ic(tuple("Elwood"))
