# BATTLESHIP EVALUATION GRID

## STYLE (3 point)

* Correct use of `if __main__:` and `main()` function: 1 point
* Coherent naming style for variables and functions, ie. all `snake_case` or all `camelCase`: 1 point
* Only local variables, except few used as *constants*, defined in the top of the file, and with names `ALL_CAPITAL`: 1 point

## I/O  (13 point)

* Ask user for the name of the map file: 1 point
* Read and store the map from the file (read all lines): 2 point
* Use only 1 function to read both maps: 1 point
* Read shots from the file `moves.txt` (splits, convert, etc): 2 point
* Use of `try/except`: 1 point
* Correct exception (`OSError`): 1 point
* Correct output (all the requested information after each shot): 1 point
* Correct output (**all** the requested information after each shot, **exactly** in the requested format): 1 point
* Correct output (*final map*): 3 point

## ALGORITHM (10 points)

* Store maps in something used as 2d vectors: 2 point
* Update the relevant map: 3 point
* Detect game end: 3 point
* Switch between players: 2 point
