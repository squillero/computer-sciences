# LOANS

A file named `Loans.csv` contains the list of books currently on loan from a library, one per line, in the following format:

```
copyCode;ISBNCode;genre
```

where `ISBNCode` uniquely identifies a specific book, while `copyCode` uniquely identifies a particular physical copy of that book.
In other words, if the library owns multiple copies of the same book, they will have the same `ISBNCode` but different `copyCode` values.

The loan list is not sorted. Assume that none of the fields contains a semicolon, which appears in the file only as a separator.

The library wants to identify all books for which more than 3 copies are currently on loan.

The Python program must therefore:

only if there are books with more than 3 copies on loan, generate a file named `LoansToCheck.csv` containing the list of excess copies to be checked. Otherwise, the program must display an appropriate message indicating that there are no excess loans. For simplicity, the choice of which copies are to be checked depends on the order in which they are read from the file.

The `LoansToCheck.csv` file must list the books in a more compact format than the original file. In particular, the books must be sorted alphabetically by `ISBNCode`, and each `ISBNCode` must appear only once in the file.

The new row format for this file is as follows:

```
ISBNCode;genre;copyCode1;copyCode2;…;copyCodeN
```

where `copyCode1`, `copyCode2`, …, `copyCodeN` represent the codes of the different copies of the book, listed in alphabetical order by `copyCode`.

NB. The program must handle potential exceptions raised while opening the files.

Example content of the input file `Loans.csv`

```
L004;9788800000011;Narrativa
S001;9788800000033;Saggi
L001;9788800000011;Narrativa
G002;9788800000022;Gialli
L003;9788800000011;Narrativa
S002;9788800000033;Saggi
G001;9788800000022;Gialli
L002;9788800000011;Narrativa
F001;9788800000044;Fantasy
L005;9788800000011;Narrativa
F002;9788800000044;Fantasy
G003;9788800000022;Gialli
```

The generated output file has the following content:

`LoansToCheck.csv`

```
9788800000011;Narrativa;L002;L005
```
