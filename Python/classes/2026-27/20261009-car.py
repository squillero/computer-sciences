# Author: Giovanni Squillero <giovanni.squillero@polito.it>
# Copyright © 2026 Giovanni Squillero / Politecnico di Torino
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

car1_cost = 1_000
car1_yearly = 100
car2_cost = 2_000
car2_yearly = 42

# When car2 is betterthan car1

car1_total_cost = car1_cost
car2_total_cost = car2_cost
num_year = 0
while car1_total_cost < car2_total_cost:
    print(f"{num_year:2d}: Car1: {car1_total_cost:g}$ / Car2: {car2_total_cost:g}$")
    car1_total_cost = car1_total_cost + car1_yearly
    car2_total_cost = car2_total_cost + car2_yearly
    num_year = num_year + 1
print(f"{num_year:2d}: Car1: {car1_total_cost:g}$ / Car2: {car2_total_cost:g}$")
