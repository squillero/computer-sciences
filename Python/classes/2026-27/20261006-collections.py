# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# TUPLE
foo = (23, 10)
print(foo)

bar = (18, 5, "Paola")
print(bar)

birthday = ("Giovanni", (23, 10))
print(birthday)

# The [] operator
print(birthday[0])
print(birthday[1])
print(birthday[1][0])

name = "Giovanni Adolfo Pio Pietro"
print(name[7])

hello_list = ["Patricio", (9, 10)]
print(hello_list[0])
print(hello_list[0][2])

hello_list[0] = "Bob Rock"
print(hello_list)

string = "oh, mamma mia mamma mia"
rune = string[0]
print(string, type(string))
print(rune, type(rune))

print(len("Hello!"))
print(len((23, 10)))
print(len([]))

empty_list = []
empty_tuple = ()
empty_string = ""
one_element_list = [42]
one_element_tuple = (42,) # (42) would be as 42
empty_list_2 = list()
empty_tuple_2 = tuple()
empty_string_2 = str()


