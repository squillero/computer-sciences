# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def main():
    foo = "Giovanni Adolfo Pio Pietro"
    bar = [23, 10, 18, 5]
    print(foo[::-1])  # ie. print(foo[len(foo) - 1 :: -1])
    baz = list()
    baz.append(23)
    baz.append(10)
    baz.extend([18, 5])  # ie. baz += [18, 5]
    print(baz)
    beatles = ["John", "Paul", "George", "Ringo"]

    print(str.join("<balalalalla>", beatles))
    print("<balalalalla>".join(beatles))

    "a".upper()
    str.upper("a")

    print((42).conjugate())


if __name__ == "__main__":
    main()
