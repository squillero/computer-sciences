# ATOMIC CHESS

## BASIC PYTHON: 4

- Check `__name__` and use of `main()`: 2 point
- Coherent naming (GLOBAL_SYMBOLS + either all `snake_case` or all `camelCase`): 1
- No global symbols except for *constants*: 1

## INPUT/OUTPUT/DATA STRUCTURE: 14

- Correct open/close (either `with` or a clean `.close()` in *all* possible branches, including except): 1
- Use of `try / except`: 1
- Use of the correct `OSError` exception: 1
- Correct handling of the file in two halves, board+moves: 2
- Correct reading of the board into a suitable data structure: 3
- Correct reading/parsing of moves (no need to store them): 2
- Correct information in the final printout (any format): 2
- Correct display of the board: 2

## ALGORITHM: 10

- Correct coordinates (ie. not flipping the board): 1
    - Note: if `a1` is top left instead of bottom left, but all the code is correct it's only -1
- Attempt to check move validity: 1
- Correct check of move validity: 1
- Attempt to check end of game (exploded king): 1
- Correct check of end of game (exploded king): 1
- Attempt to move pieces: 1
- Correctly implemented move when land on empty square: 1
- Attempt to explode pieces: 1
- Correctly implemented move when an explosion is involved: 2

