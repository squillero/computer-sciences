# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


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
