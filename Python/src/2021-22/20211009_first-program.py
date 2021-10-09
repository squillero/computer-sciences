#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2021 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

MINUTE = 60
HOUR = 60 * MINUTE
DAY = 24 * HOUR
WEEK = 7 * DAY

seconds = 23**5
print(seconds, "seconds", "=")

print(f"{seconds:,} seconds")

weeks = seconds // WEEK
seconds %= WEEK     # ie. seconds = seconds % WEEK
days = seconds // DAY
seconds %= DAY
hours = seconds // HOUR
seconds %= HOUR
minutes = seconds // MINUTE
seconds %= MINUTE

# print(weeks, "weeks", days, "days", hours, "hours", minutes, "minutes", "and", seconds, "seconds")
print(f"{weeks} weeks, {days} days, {hours} hours, {minutes} minutes, and {seconds} seconds")

print(round(2/7, 2))
