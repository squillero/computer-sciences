# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.


def foo():
    print("Useless function")


def bar():
    return 23, 10


x = foo()
print(x)

x, y = bar()
print(x, y)
