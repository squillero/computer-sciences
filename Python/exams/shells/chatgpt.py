# Solution automagically created by ChatGPT 3.5 on Friday, January 26 2024
# Note: not working!

from collections import defaultdict


def read_prices(file_path):
    prices = {}
    with open(file_path, 'r') as file:
        for line in file:
            shell, price = line.strip().split(': ')
            prices[shell] = float(price)
    return prices


def read_offers(file_path):
    offers = defaultdict(list)
    with open(file_path, 'r') as file:
        for line in file:
            shells, free_shell = line.strip().split(': ')
            offer_shells = shells.split()
            offers[tuple(offer_shells)].append(free_shell)
    return offers


def read_cart(file_path):
    with open(file_path, 'r') as file:
        return [line.strip() for line in file]


def calculate_final_price(prices, offers, cart):
    final_price = 0
    for shell in cart:
        final_price += prices[shell]

    for offer, free_shell in offers.items():
        count = min(cart.count(offer_shell) for offer_shell in offer)
        if count >= len(offer):
            free_count = count // len(offer)
            final_price -= free_count * prices[free_shell[0]]
            print(f'As you buy {", ".join(offer)}; you got {free_shell[0]} for free')

    return final_price


def main():
    prices = read_prices('prices.dat')
    offers = read_offers('offers.dat')
    cart = read_cart('cart.dat')

    final_price = calculate_final_price(prices, offers, cart)

    print(f'Final price: {final_price:.2f} EUR')


if __name__ == "__main__":
    main()
