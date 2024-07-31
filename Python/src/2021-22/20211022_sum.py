# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

extra_variable = True

sum_ = 0
while extra_variable:
    input_ = input("Oh no: ")

    # if len(input_) == 0:
    # if input_ == '':
    if not input_:  # ie. if bool(input_) == False
        extra_variable = False
    else:
        num = int(input_)
        sum_ += num

    # Alternative solution
    #if input_.isdigit():
    #    num = int(input_)
    #    sum_ += num
    #else:
    #    extra_variable = False

print(f"Sum: {sum_:,}")
