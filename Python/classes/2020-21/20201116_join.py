# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    """Main entry point"""
    friends = ['Alice', 'Bob', 'Carla', 'David']

    result = ""
    for n in friends[:-1]:
        result = result + n + ", "
    result = result + friends[-1]

    print(f">>>> {result} <<<<")


if __name__ == '__main__':  # BLACK MAGIC!
    main()
