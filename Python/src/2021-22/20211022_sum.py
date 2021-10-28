# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

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
