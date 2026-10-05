# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2025 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import csv
from pprint import pprint

DB_FILENAME = 'foods.csv'


def read_foods(filename):
    foods = dict()
    try:
        with open(filename, newline='') as csvfile:
            reader = csv.reader(csvfile)
            for food_name, cost, calories in reader:
                cost = float(cost)
                calories = float(calories)
                foods[food_name] = (cost, calories)
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(1)
    return foods


def read_recipe(filename):
    recipe = dict()
    try:
        with open(filename) as file:
            raw = file.read()
            ingredients, method = raw.split('\n\n')
            ingredients = ingredients.split('\n')
            for line in ingredients[1:]:
                food, qty = line.split(';')
                qty = float(qty)
                recipe[food] = qty
    except OSError as problem:
        print(f"Yeuch: {problem}")
        exit(1)
    return recipe


def main():
    foods = read_foods(DB_FILENAME)
    recipe = read_recipe('fusilli-alle-olive.txt')

    # Option 1
    print("Ingredients:")
    for k, v in sorted(recipe.items(), key=dummy_helper_function, reverse=True):
        print(f"{k} - {v:.1f}")

    # Option 2
    def local_function(f):
        return recipe[f]  # LEGB -> This is E

    print("Ingredients:")
    for k in sorted(recipe, key=local_function, reverse=True):
        print(f"{k} - {recipe[k]:.1f}")

    # Option 3
    print("Ingredients:")
    for k in sorted(recipe, key=lambda f: recipe[f], reverse=True):
        print(f"{k} - {recipe[k]:.1f}")

    tot_cost = 0
    tot_calories = 0
    for k, v in recipe.items():
        cost, calories = foods[k]
        tot_cost += v / 1000 * cost
        tot_calories += v / 1000 * calories
    print(f"Number of ingredients: {len(recipe)}")
    print(f"Recipe cost: {tot_cost:.2f}")
    print(f"Recipe calories: {tot_calories:.2f}")


def dummy_helper_function(t):
    return t[1]


if __name__ == '__main__':
    main()
