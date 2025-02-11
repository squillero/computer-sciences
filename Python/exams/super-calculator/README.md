# INFINITE IMPROBABILITY SUPER CALCULATOR

The *Infinite Improbability Super Calculator* (IISC) is able to calculate the exact distance between Magrathea and Milliways, but it is not so reliable with standard math. It supports only three types of operators: *add* (`+`), *subtract* (`-`), and *multiply* (`*`); moreover it always evaluates operators left-to-right, not according to the standard precedence rules.

Write a program that emulates the IISC: it reads a list of expression from a file, calculates their value, and eventually print the results on screen. Each line represents a single expression in the IISC format: the list of operands followed by the list of operators, the two separated by a colon `:`. The format of the file is correct, but the number of lines nor their size is known.

For instance, when reading this file:

```
10 19 : +
381 40 27 : - * 
76 8 1 6 15 : - * + *
```

the program should produce

```
29
9207
1110
```

because

- $10 + 19 = 29$
- $381 - 40 = 341$ and $341 * 27 = 9207$
- $76 - 8 = 68$, $68 * 1 = 68$, $68 + 6 = 74$, and $74 * 15 = 1110$
