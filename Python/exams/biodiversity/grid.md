# BIODIVERSITY -- EVALUATION GRID

## STYLE (3 points)

- Correct use of `if __main__:` and `main()` function: 1 point
- Coherent naming style for variables and functions, ie. all `snake_case` or all `camelCase`: 1 point
- Only local variables, except few used as *constants*, defined in the top of the file, and with names `ALL_CAPITAL`: 1 point

## I/O BOILERPLATE (6 points)

- Use of `try/except`: 2 points (1 per file)
- Use of `try/except` around a *small* fragment of code: 2 points (1 per file)
- Correct exception (`OSError`): 2 points (1 per file)

## I/O PROBLEM SPECIFIC (15 points)

- Read *DNA database* and store species' DNA: 1 point
- Read *DNA database* and store species' taxonomy: 1 point
- Store taxonomy information in a data structure that reflects the taxonomic tree: 1 point
- Read *eDNA sequences* and store them in a suitable format: 1 point
- Attempt to detect repeated sample: 1 point
- Exact detection of repeated samples (ie. both site id and eDNA): 1 point
- Exact format of the warning for repeated samples: 1 point
- Exact format of the percentage (ie. `:.2%`): 1 point
- Print of the species with number of matches is > 1: 1 point
- Print of only the species where the number of matches > 1: 1 point
- Print of the family only when different from the above line: 1 point
- Print of the order only when different from the above line: 1 point
- Print of a '|' to separate two families: 1 point
- Correct format when printing family, order, species (spaces, symbols '\_', etc.): 1 point
- Perfect output format regardless of the content (ie. 'Taxonomic tree:', blank lines, etc.): 1 point

## ALGORITHM (8 points)

- Correctly check that one fragment of eDNA is inside one complete DNA: 1 point
- Check that the same fragment of eDNA is inside multiple different complete DNAs: 1 point
- Check that the same fragment of eDNA is inside all complete DNAs: 1 point
- Attempt to calculate the percentage of samples that match at least one species: 1 point
- Exact calculation of the percentage of samples that match at least one species: 1 point
- Attempt to calculate the number of different of samples that match each species: 1 point
- Exact calculation of the number of different of samples that match each species: 2 point
