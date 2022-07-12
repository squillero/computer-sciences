# Copyright © 2022 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

import sys
from csv import reader

INGREDIENTS_FILENAME = '20220114_ingredients.txt'
RECIPE_FILENAME = '20220114_polenta_concia.txt'


def read_ingredients(filename):
    ingredients = dict()
    try:
        with open(filename, newline='') as data:
            for d in reader(data, delimiter=';'):
                ingredients[d[0].strip()] = {'Cost': float(d[1]), 'Calories': int(d[2])}
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(1)
    return ingredients


def read_recipe(filename):
    ingredients = dict()
    try:
        with open(filename, newline='') as data:
            line = data.readline()
            line = data.readline().rstrip()
            while line:
                ing, qty = line.split(';')
                ingredients[ing.strip()] = {'Quantity': float(qty)}
                line = data.readline().rstrip()
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(1)
    return ingredients


def main():
    available_ingredients = read_ingredients(INGREDIENTS_FILENAME)
    required_ingredients = read_recipe(RECIPE_FILENAME)
    print("Ingredients:")
    cost = 0
    calories = 0
    for ing in sorted(required_ingredients,
                      key=lambda i: required_ingredients[i]['Quantity'],
                      reverse=True):
        print(f"{ing} - {required_ingredients[ing]['Quantity']:.1f}")
        cost += available_ingredients[ing]['Cost'] / 1000 * required_ingredients[ing]['Quantity']
        calories += available_ingredients[ing]['Calories'] / 1000 * required_ingredients[ing][
            'Quantity']
    print()
    print(f"Number of ingredients: {len(required_ingredients)}")
    print(f"Recipe cost: {cost:.2f}")
    print(f"Recipe calories: {calories:.2f}")


if __name__ == '__main__':
    main()
