# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.


def list_subst(list_, old_value, new_value):
    for index in range(len(list_)):
        if list_[index] == old_value:
            list_[index] = new_value


def list_subst_slightly_better(list_, old_value, new_value):
    for index, value in enumerate(list_):
        if value == old_value:
            list_[index] = new_value


foo = list("Giovanni Adolfo Pietro Pio")
list_subst_slightly_better(foo, "i", "*")
print(foo)
