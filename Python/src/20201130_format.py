##--------------#-----------------------------------------------------------#
#|              | CLASS SAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)            #
#|   ######     | (!) 2020, Giovanni Squillero <squillero@polito.it>        #
#|  #######     | https://github.com/squillero/computer-sciences            #
#|  ####   \    |                                                           #
#|   ###G  c\   | => Copying and distributing this file for classroom use,  #
#|   ##     _\  | either with or without modification, is permitted without #
#|   |    _/    | royalties provided that this 11-line comment is preserved #
#|   |   _/     |                                                           #
#|              | => THIS FILE IS OFFERED AS-IS, WITHOUT ANY WARRANTY       #
##--------------#-----------------------------------------------------------#

INPUT_FILE_NAME = 'numbers.ku'
OUTPUT_FILE_NAME = 'numbers.tu'


def main():
    input_file = open(INPUT_FILE_NAME, 'r')
    output_file = open(OUTPUT_FILE_NAME, 'w')
    token = input_file.readline()
    sum_ = 0
    cnt = 0
    while token != '':
        num = float(token)
        sum_ += num     # ie. sum = sum_ + num
        cnt += 1        # ie. cnt = cnt + 1
        output_file.write(f"{num:.2f}\n")
        token = input_file.readline()
    input_file.close()

    output_file.write(f"{'-' * 8}\n")
    output_file.write(f"Total: {sum_:.2f}\n")
    output_file.write(f"Average: {sum_/cnt:.2f}\n")
    output_file.close()


if __name__ == '__main__':
    main()
