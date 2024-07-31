# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

INITIAL_VALUE = 10_000
INTEREST_RATE = 1 / 100  # ie. 1%

money = INITIAL_VALUE
num_years = 0

while money < INITIAL_VALUE * 2:
    num_years = num_years + 1
    money = money + money * INTEREST_RATE

print(
    f"With a {INTEREST_RATE*100:.0f}% interest, after {num_years} years, my money is duobled ({money:,.0f} EUR)"
)
