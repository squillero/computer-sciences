# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences


def main():
    beatles = ['John', 'Paul', 'George', 'Ringo', 'Stuart']
    print("The BEATLES:")
    for i, b in enumerate(beatles):
        print(f"I love Beatles number {i+1}: {b}!")


if __name__ == '__main__':  # BLACK MAGIC!
    main()
