# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

# LAMBDA: A Disposable Callable object

from pprint import pprint


def main():
    songs = dict()
    songs["Hype Boy"] = "NewJeans"
    songs["Eyes without a Face"] = "Billy Idol"
    songs["Dancing Queen"] = "Abba"
    songs["Yesterday"] = "Beatles"

    pprint(sorted(songs.items()))
    pprint(sorted(songs.items(), key=lambda e: e[1]))
    # pprint(sorted(songs.values(), key=len))
    # pprint(sorted(songs, key=lambda k: len(songs[k])))


if __name__ == "__main__":
    main()
