### CRYPTOCURRENCY PORTFOLIO

Paperius Billionis has decided to invest in cryptocurrencies. You are asked to develop a Python program that allows Paperius to calculate the value of his investments.

The system must read data from two CSV files: the file *token.csv* and the file *token_prices.csv*. The file *token.csv* contains the following information, separated by semicolons:

```csv
Token;Quantity
```

*Token* represents the name of the purchased coin and *Quantity* represents the quantity that has been purchased. For example, the row 

```csv
BTC;0.01
```

means that Paperius owns 0.01 BTC (bitcoin). The file *token_prices.csv* contains the following information, separated by semicolons:

```csv
Date;Token;Price_USD
```

For example, with reference to the row

```
2025-11-01;BTC;110026.69
```

we can see that on November 1st, 2025, one BTC was worth 110026.69 USD (US dollars).

The Python program must:  

- load the data from the files, creating appropriate data structures;
- compute and print the total number of distinct days on which token prices were monitored;
- compute (and print following the format shown in the example), for each date present in the file "token_prices.csv", the value of Paperius's portfolio, based on the value of the tokens he owns on that date. For simplicity, assume that Paperius does not sell or buy any tokens during the considered time interval;
- print the date on which Paperius's portfolio reached its maximum value, and show what the value of the portfolio was on that date;

## Example

With the given files, the output would be:

```
Number of days: 67

Date              Value (USD)
2025-11-01        5099.52
2025-11-02        5098.60
2025-11-03        5143.09
...
2026-01-06        4281.68

Date of maximum value: 2025-11-03, value: 5143.09
```
