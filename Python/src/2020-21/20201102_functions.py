#  Copyright © 2020 Giovanni Squillero <squillero@polito.it>
#  Free for personal or classroom use; see 'LICENCE.md' for details.
#  https://github.com/squillero/computer-sciences


def factorial(num):
    fact = 1
    for n in range(1, num + 1):
        fact = fact * n
    num = "num is a local name!!!!!"
    print(f"num inside factorial: '{num}'")
    return fact


num = int(input("number: "))
f = factorial(num)
print(f"{num}! = {f}")
print(f"num outside factorial: '{num}'")
