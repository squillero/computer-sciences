#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2021 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

from math import sqrt

# 3 x**2 - 9 x + 2

a = 3
b = -9
c = 2

delta = b**2 - 4*a*c
x1 = (-b + sqrt(delta)) / (2*a)
x2 = (-b - sqrt(delta)) / (2*a)

print(f"x1={x1}; x2={x2}")
