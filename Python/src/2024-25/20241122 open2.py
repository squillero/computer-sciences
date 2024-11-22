# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

ERROR = "Interstellar"
FILE_IN = "20241122 movies.gx"
FILE_OUT = "20241122 movies2.gx"


def read_list(file_name):
    list_ = list()
    try:
        with open(file_name) as file:
            for line in file:
                list_.append(line.rstrip())
    except OSError:
        list_ = list()
    return list_


def write_list(file_name, list_):
    try:
        with open(file_name, 'w') as file:
            for line in list_:
                file.write(line)
                file.write('\n')
    except OSError as problem:
        print(problem)


def main():
    movies = read_list(FILE_IN)
    movies2 = list()
    for movie in movies:
        if movie != ERROR:
            movies2.append(movie)
    write_list(FILE_OUT, movies2)


if __name__ == '__main__':
    main()
