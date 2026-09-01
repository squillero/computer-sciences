# Copyright © 2023 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def foo():
    print("Useless function")


def bar():
    return 23, 10


x = foo()
print(x)

x, y = bar()
print(x, y)
