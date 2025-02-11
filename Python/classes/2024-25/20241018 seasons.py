# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# Month 1: winter
# Month 2: winter
# Month 3: winter/spring
# Month 4: spring
# Month 5: spring
# Month 6: spring/summer
# Month 7: summer
# Month 8: summer
# Month 9: summer/autumn
# Month 10: autumn
# Month 11: autumn
# Month 12: autumn/winter

months = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
seasons = ["Winter", "Spring", "Summer", "Autumn"]
num_days = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

m = int(input("Month: ")) - 1
d = int(input("Day: "))

if not 1 <= m <= 12 or not 1 <= d <= num_days[m]:
    exit("D'ho!?")

s = m // 3
if (m + 1) % 3 == 0 and d >= 21:
    s = (s + 1) % 4
print(f"{d}-{months[m]} is {seasons[s]}")
