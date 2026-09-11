# INFINITE IMPROBABILITY SUPER CALCULATOR -- EVALUATION GRID

## GENERAL

The program must be free of syntax errors and statically compilable; that is, the Python interpreter must be able to compile it into bytecode without executing it.

```shell
python -m py_compile myscript.py
```

All statically compilable programs will be evaluated according to the following rubric, even if they do not work correctly or crash at runtime.

## DETAILED POINTS

### STYLE (3 point)

- Correct use of if __main__: and main() function: 1 point
- Coherent naming style for variables and functions, ie. all snake_case or all camelCase: 1 point
- Only local variables, except few used as constants, defined in the top of the file, and with names ALL_CAPITAL: 1 point

### I/O (11 point)

- Use of try/except for input file: 1 point
- Use of try/except around a small fragment of code for input file: 1 point
- Correct exception (OSError) for input file: 1 point
- Use of try/except for output file: 1 point
- Use of try/except around a small fragment of code for output file: 1 point
- Correct exception (OSError) for output file: 1 point
- Correct parsing of input lines: 1 points
- Reading loans and storing them in a suitable format: 1 points
- Grouping copies by ISBN in a suitable format: 1 points
- Correct output format (regardless the correctness of the copies): 1 point
- Correct ordering of ISBN codes: 1 point

### ALGORITHM (12 points)

- Reading the file only once: 1 point
- Correct handling of one ISBN with exactly 1 copy on loan: 1 point
- Correct handling of one ISBN with 2 or 3 copies on loan: 1 point
- Correct handling of one ISBN with more than 3 copies on loan: 1 point
- Correct handling of all ISBNs with exactly 1 copy on loan: 1 point
- Correct handling of all ISBNs with 2 or 3 copies on loan: 1 point
- Correct handling of all ISBNs with more than 3 copies on loan: 1 point
- Selection of at least one copy in a group of N > 4 copies: 1 point
- Selection of all copies in a group of N > 4 copies: 1 point
- Correct identification of at least one genre: 1 point
- Correct identification of all genres: 1 point
- Efficient identification of genres (ie. $O(1)$): 1 point
