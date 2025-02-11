# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

FOLDER = "20240109 lab11"
ARTIST_FILE = "artists.txt"


def read_artists(filename):
    artists = dict()
    try:
        with open(filename) as artists_file:
            for line in artists_file:
                code, data = line.split(";")
                artists[code] = data.strip()
    except OSError as problem:
        exit(problem)

    return artists


def read_albums(database, filename, artist_code):
    try:
        with open(filename) as album_file:
            for line in album_file:
                year, title = line.split(";")
                year = int(year)

                if year not in database:
                    database[year] = list()

                database[year].append((title.strip(), artist_code))
    except OSError as problem:
        exit(problem)


def print_database(database):
    for year in sorted(database):
        print(f"{year}:")
        for title, artist in database[year]:
            print(f"{title:<50} {artist}")


def main():
    artists = read_artists(FOLDER + "/" + ARTIST_FILE)
    database = dict()
    for code, filename in artists.items():
        read_albums(database, FOLDER + "/" + filename, code)
    print_database(database)


if __name__ == "__main__":
    main()
