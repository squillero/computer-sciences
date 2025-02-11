# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


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


if __name__ == '__main__':  # BLACK MAGIC!
    main()
