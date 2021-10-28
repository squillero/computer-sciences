# Copyright © 2020 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences


def main():
    beatles = ['John', 'Paul', 'George', 'Ringo']
    print("The BEATLES:")
    for i in range(4):
        print(f"I love Beatles number {i+1}: {beatles[i]}!")


if __name__ == '__main__':  # BLACK MAGIC!
    main()
