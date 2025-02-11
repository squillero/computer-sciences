# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

name = ['Giovanni', 'Adolfo', 'Pietro', 'Pio']
print(name)
name[1] = 'Barabba'
print(name)
name[1] = 42
name[2] = 42.0
print(name)

my_list = list()
print(my_list)
my_list.append(42)
print(my_list)

name = "The" + "Beatles"
birthdays = [23, 10] + [18, 5]
print(birthdays)
birthdays = birthdays[:2] + [999] + birthdays[-2:]
print(birthdays)
print(len(birthdays))

birthdays = birthdays[: len(birthdays) // 2] + [888] + birthdays[-len(birthdays) // 2 :]
birthdays = birthdays[: len(birthdays) // 2] + [666] + birthdays[-len(birthdays) // 2 :]
print(birthdays)
print(len(birthdays))


my_list = []
check = my_list
my_list.append(23) # modify the list
my_list.append(10) # modify the list
my_list = my_list + [99] # new list!
check2 = my_list
my_list += [99] # new list?


