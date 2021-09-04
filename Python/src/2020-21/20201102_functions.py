#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/


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
