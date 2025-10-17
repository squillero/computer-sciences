# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# Ask for friend name one at a time
# add names in a string, like: "Alice, Bob, and Carl".
# stop if I get 2 consecutive friends with the same name
# (eg. "Bob, Alice, and Alice")
# or if I get a name very long (eg. "Giovanni Adolfo Pio Pietro")
# or if I get 10 names

LONG_NAME_LENGTH = 15
MAX_NUMBER_OF_NAMES = 10

friend_list = ""
last_name = ""
number_of_names = 0

finished = False
while not finished:
    new_name = input("Name: ")
    number_of_names += 1
    friend_list += last_name + ", "
    print("Friend list:", friend_list)
    if len(new_name) >= LONG_NAME_LENGTH:
        finished = True
    if number_of_names == MAX_NUMBER_OF_NAMES:
        finished = True
    if new_name == last_name:
        finished = True
    last_name = new_name
# Patch string removing the initial ", "
friend_list = friend_list[2:]
# add "and LAST_NAME"
friend_list += "and " + last_name
print("Friend list:", friend_list)
