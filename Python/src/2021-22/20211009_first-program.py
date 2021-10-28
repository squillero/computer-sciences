# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENCE.md' for details.
# https://github.com/squillero/computer-sciences

MINUTE = 60
HOUR = 60 * MINUTE
DAY = 24 * HOUR
WEEK = 7 * DAY

seconds = 23**5
print(seconds, "seconds", "=")

print(f"{seconds:,} seconds")

weeks = seconds // WEEK
seconds %= WEEK  # ie. seconds = seconds % WEEK
days = seconds // DAY
seconds %= DAY
hours = seconds // HOUR
seconds %= HOUR
minutes = seconds // MINUTE
seconds %= MINUTE

# print(weeks, "weeks", days, "days", hours, "hours", minutes, "minutes", "and", seconds, "seconds")
print(f"{weeks} weeks, {days} days, {hours} hours, {minutes} minutes, and {seconds} seconds")

print(round(2 / 7, 2))
