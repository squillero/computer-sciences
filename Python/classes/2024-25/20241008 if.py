# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# Check if num < 10.1 or num > 20.2
num = float(input())
if num < 10.1 or num > 20.2:
    print("Yeah!")
if num < 10.1 and num > 20.2:
    print("D'ho!?")
if 0 > num > 10 or num > 100:
    print("Yo!")

# If you pay you get food, if you don't pay...
pay = True
food = False
if (pay and food) or (not pay and not food):
    print("!")


good_day = not raining and not windy
good_day = not (raining or windy)
