# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


def main():
    """Main entry point"""

    values = []
    print("Enter values, Q to quit")

    user_input = input("")
    while user_input.upper() != "Q":
        values.append(float(user_input))
        user_input = input("")

    print(values)
    print(f"Min is {min(values)}, max is {max(values)}")


if __name__ == '__main__':  # BLACK MAGIC!
    main()
