#  Copyright © 2020 Giovanni Squillero <squillero@polito.it>
#  Free for personal or classroom use; see 'LICENCE.md' for details.
#  https://github.com/squillero/computer-sciences


def main():
    """Main entry point"""

    values = []
    print("Enter values, Q to quit")

    user_input = None
    while user_input is None or user_input.upper() != "Q":
        user_input = input("")
        if user_input.upper() != "Q":
            values.append(float(user_input))

    print(values)
    print(f"Min is {min(values)}, max is {max(values)}")


if __name__ == '__main__':  # BLACK MAGIC!
    main()
