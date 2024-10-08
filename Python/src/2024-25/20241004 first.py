# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.
# This is a comment!


# In Python a variable is an Object bound to a Name
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

A = "Pepsi"
print(A)

B = "Coke"
print(A, B)

A = B
print(A, B)

C = "Pepsi"
D = "Pepsi"

print(A, B, C, D)
C = D
print(A, B, C, D)
