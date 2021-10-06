#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/


def main():
    """Main entry point"""

    values = []
    print("Enter values, Q to quit")

    user_input = None
    tmp_values = []
    while user_input is None or user_input.upper() != "Q":
        user_input = input("")
        tmp_values.append(user_input)

    tmp_values.pop()
    for v in tmp_values:
        values.append(float(v))

    print(values)
    print(f"Min is {min(values)}, max is {max(values)}")


if __name__ == '__main__':  # BLACK MAGIC!
    main()
