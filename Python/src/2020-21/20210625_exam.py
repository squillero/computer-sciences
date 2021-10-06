#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2021 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/


def main():
    cities = read_file("20210625_trolls.dat")

    max_city_names = list()
    max_city_trolls = 0

    for c, t in cities.items():
        num_trolls = sum(t)
        if num_trolls > max_city_trolls:
            max_city_trolls, max_city_names = num_trolls, [c]
        elif num_trolls == max_city_trolls:
            max_city_names.append(c)

    if len(max_city_names) == 1:
        print(
            f"The city where more trolls have been reported is {max_city_names[0]}, with {max_city_trolls:,} trolls."
        )
    elif len(max_city_names) == 2:
        print(
            f"The two cities where more trolls have been reported are {max_city_names[0]} and {max_city_names[1]}, with {max_city_trolls:,} trolls."
        )
    else:
        max_city_names[-1] = 'and ' + max_city_names[-1]
        print(
            f"The cities where more trolls have been reported are {', '.join(max_city_names)}, all with {max_city_trolls:,} trolls."
        )


def read_file(filename):
    trolls = dict()
    try:
        with open(filename) as file:
            for line in file:
                city, data = line.split(':')
                trolls[city] = [int(_) for _ in data.split()]
    except OSError as error:
        print(f"Yeuch: {error}")
        trolls = dict()
    return trolls


if __name__ == "__main__":
    main()
