# Copyright © 2026 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# from icecream import ic
from csv import DictReader

TOKEN_FILENAME = 'token.csv'
PRICES_FILENAME = 'token_prices.csv'

FIELD_TOKEN = 'Token'
FIELD_QTY = 'Quantità'
FIELD_DATE = 'Data'
FIELD_PRICE = 'Prezzo_USD'


def read_token(filename):
    """Read portfolio CSV"""
    portfolio = dict()
    try:
        with open(filename, newline='') as csv_file:
            reader = DictReader(csv_file, delimiter=';')
            for record in reader:
                portfolio[record[FIELD_TOKEN]] = float(record[FIELD_QTY])
    except OSError:
        print(f"Yeuch. Problem with file \"{filename}\"")
        portfolio = dict()
    return portfolio


def read_prices(filename):
    """Read prices CSV"""
    prices = dict()
    try:
        with open(filename, newline='') as csv_file:
            reader = DictReader(csv_file, delimiter=';')
            for record in reader:
                # Note: Pythonistas would use a defaultdict
                if record[FIELD_DATE] not in prices:
                    prices[record[FIELD_DATE]] = list()
                prices[record[FIELD_DATE]].append((record[FIELD_TOKEN], float(record[FIELD_PRICE])))

    except OSError:
        print(f"Yeuch. Problem with file \"{filename}\"")
        prices = dict()
    return prices


def evaluate_portfolio(portfolio, prices):
    """Evaluate portfolio considering the value of the different tokens"""
    total_value = 0
    for token, price in prices:
        if token in portfolio:
            total_value += portfolio[token] * price
    # Note: If a token in `portfolio` is not listed in `prices`, it's value is 0
    return total_value


def main():
    portfolio = read_token(TOKEN_FILENAME)
    prices = read_prices(PRICES_FILENAME)

    num_days = len(set(prices.keys()))
    print(f"Number of days: {num_days}")
    print()

    print(f"{'Date':<18s}Value (USD)")
    max_value = (None, 0)
    for day in sorted(prices):
        value = evaluate_portfolio(portfolio, prices[day])
        print(f"{day:<18s}{value:.2f}")
        if value > max_value[1]:
            max_value = (day, value)

    print()
    print(f"Date of maximum value: {max_value[0]}, value: {max_value[1]:.2f}")


if __name__ == "__main__":
    main()
