# Copyright © 2020 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    beatles = ['John', 'Paul', 'George', 'Ringo']
    print("The BEATLES:")
    for i in range(4):
        print(f"I love Beatles number {i+1}: {beatles[i]}!")


if __name__ == '__main__':  # BLACK MAGIC!
    main()
