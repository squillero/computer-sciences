# EVALUATION GRID FOR THE WOW EXAM

## PYTHONIC STYLE 5

* **Coherence** (1pt): Coherent use of a single programming style, either *camelCase* or *snake_case*.
* **Style** (1pt): All variables are *local* except (few) *constants* defined in the beginning of the file and marked in *ALL_CAPS*.
* **Function** (1pt): Program is split in functions.
* **Main** (1pt): Use of function *main* as single entry point of the program.
* **If-Name** (1pt): Correct test of the "`if __name__ == '__main__'`" test.

## I/O & DATA STRUCTURE 12

* **With** (2pt): Use of `with` or correct use of `open`/`close` (ie. code that always close the file, even in presence of exceptions).
* **try/except** (1pt): Use of `try`/`except` around all file I/O instructions.
* **OSError** (1pt): Use of the correct `except OSError` for file I/O problems.
* **List/List** (2pt): Use of a list/tuple of list/tuple of strings for memorizing sequences.
* **Parse** (2pt): Correct parsing of the file and memorization of the data.
* **Input** (2pt): Correct input from the user.
* **Output** (1pt): Correct output format if the two words are present in the same line.
* **Output** (1pt): Correct output format if the two words are not present in the same line.

## ALGORITHM 9

* **Base** (2pt): The algorithm correctly calculates `d(foo, bar) = n+1` in "y foo x1 ... xn bar z"
* **Base** (2pt): The algorithm correctly calculates `d(foo, foo) = 0` in "y foo z"
* **Base** (2pt): The algorithm correctly calculates `d(bar, foo) = n+1` in "y foo x1 ... xn bar z"
* **Base** (2pt): The algorithm correctly calculates `d(foo, bar) = 1` in "y foo x1 x2 bar foo z"
* **Base** (1pt): The algorithm correctly handle `d(foo, bar)` when *foo* and *bar* never occurs on the same line
