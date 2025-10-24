# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def alice():
    print("Hello, I'm Alice")


def bob():
    print("Hello, I'm Bob")
    print("... and I'm sad because my name is too short")


def generic_friend(name):
    print(f"Hello, I'm {name}")
    if len(name) < 5:
        print("... and I'm sad because my name is too short")
    elif len(name) > 10:
        print("... and I'm happy because my name is very long")


alice()
bob()
bob()
generic_friend("Carla")
generic_friend("David")
generic_friend("Earl")
generic_friend("Giovanni Adolfo Pio Pietro")
