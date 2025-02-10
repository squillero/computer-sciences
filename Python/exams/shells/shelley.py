# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME_PRICE = 't2_prices.dat'
FILENAME_OFFERS = 't2_offers.dat'
FILENAME_CART = 't2_cart.dat'


def read_column_file(filename):
    """Reads a generic file in the form `foo:bar` trimming spaces around `:`"""
    data = list()
    try:
        with open(filename) as input_file:
            for line in input_file:
                a, b = line.split(':')
                data.append((a.strip(), b.strip()))
    except OSError as problem:
        exit(problem)
    return data


def read_cart(filename):
    """Reads the cart and returns a list"""
    try:
        with open(filename) as input_file:
            whole_file = input_file.read()
    except OSError as problem:
        exit(problem)
    return whole_file.split()


def includes(seqx, seqy):
    """Checks whether all objects in `seqx` are also in `seqy`"""
    for o in seqx:
        if seqx.count(o) > seqy.count(o):
            return False
    return True


def main():
    shell_price = dict()
    for shell, price in read_column_file(FILENAME_PRICE):
        shell_price[shell] = float(price)

    cart = read_cart(FILENAME_CART)
    items_to_pay = list(cart)  # shallow copy!

    for requisites, gift in read_column_file(FILENAME_OFFERS):
        requisites = requisites.split()
        both = requisites + [gift]
        while includes(both, cart):
            print(f"As you buy {', '.join(requisites)}; you got {gift} for free")
            items_to_pay.remove(gift)
            cart.remove(gift)
            for req in requisites:
                cart.remove(req)

    total_price = 0.0
    for item in items_to_pay:
        total_price += shell_price[item]
    print(f"Final price: {total_price:.2f} EUR")


if __name__ == '__main__':
    main()
