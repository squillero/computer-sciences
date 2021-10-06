#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

POPULATION_FILENAME = 'population.txt'
AREA_FILENAME = 'area.txt'
DENSITY_FILENAME = 'density.txt'


def main():
    population = []
    file = open(POPULATION_FILENAME, 'r')
    for line in file:
        cntry, pop = line.rsplit(maxsplit=1)
        population.append((cntry, int(pop)))
    file.close()
    print(population)

    area = []
    file = open(AREA_FILENAME, 'r')
    for line in file:
        cntry, a = line.rsplit(maxsplit=1)
        area.append((cntry, float(a)))
    file.close()
    print(area)

    file = open(DENSITY_FILENAME, 'w')
    for i in range(len(area)):
        file.write(f"{population[i][0]}: density {population[i][1]/area[i][1]:.2f}\n")
    file.close()


if __name__ == '__main__':
    main()
