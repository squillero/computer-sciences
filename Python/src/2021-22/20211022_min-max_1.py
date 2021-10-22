#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2021 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

# That would be a terrble idea...
#min_ = 99999
#max_ = 0

# Reasonable, but we got duplicated code
user_input = input()
val = int(user_input)
min_ = max_ = val

completed = False
while not completed:
    user_input = input()
    if not user_input:
        completed = True
    else:
        val = int(user_input)
        if val > max_:
            max_ = val
        if val < min_:
            min_ = val

print(f"max={max_}; min={min_}")
