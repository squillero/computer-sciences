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


def main():
    """Main entry point"""

    values = []
    print("Enter values, Q to quit")

    continue_asking = True
    while continue_asking:
        val = input()
        if val.upper() == 'Q':
            continue_asking = False

        if continue_asking:
            values.append(float(val))
                          
    print(values)
    print(f"Min is {min(values)}, max is {max(values)}")


if __name__ == '__main__':      # BLACK MAGIC!
    main()
