#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/

print("Enter your votes, end with -1")

sum_ = 0  # standard way for NOT shadowing a common name (or using a reserved keyword)
num = 0

vote = int(input(":"))
while vote >= 0:
    sum_ = sum_ + vote
    num = num + 1
    vote = int(input(":"))  # handling sentinel: duplicate code

print(f"{num} votes, average is {sum_/num:.1f}")
