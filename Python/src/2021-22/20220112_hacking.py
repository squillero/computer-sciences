# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

FILENAME_PRODUCTS = '20220112_products.txt'
FILENAME_PURCHASES = '20220112_purchases.txt'


def read_data(filename):
    data = dict()
    try:
        with open(filename) as input_file:
            for line in input_file:
                product, reseller = line.split()
                if product not in data:
                    data[product] = set()
                data[product].add(reseller)
    except OSError as problem_description:
        print(f"Yeuch: {problem_description}")
        exit(1)
    return data


def check_purchases(products, purchases):
    print("Suspicious transactions list:\n")
    for p in sorted(purchases):
        if products[p] != purchases[p]:
            print(f"Product code: {p}")
            print(f"Official reseller: {list(products[p])[0]}")
            print(f"Dealer list: {', '.join(sorted(purchases[p]))}")
            print()


def main():
    products = read_data(FILENAME_PRODUCTS)
    purchases = read_data(FILENAME_PURCHASES)
    check_purchases(products, purchases)


if __name__ == '__main__':
    main()
