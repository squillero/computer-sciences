month = int(input("Date (month): "))
day = int(input("Date (day): "))

if 1 <= month <= 3:
    season = "winter"
elif month <= 6:
    season = "spring"
elif month <= 9:
    season = "summer"
else:
    season = "autumn"

if month % 3 == 0 and day >= 21:
    if season == "winter":
        season = "spring"
    elif season == "spring":
        season = "summer"
    elif season == "summer":
        season = "autumn"
    elif season == "autumn":
        season = "winter"


print(season)
