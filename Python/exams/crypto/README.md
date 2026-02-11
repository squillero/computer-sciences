### CRYPTOCURRENCY PORTFOLIO

Paperius Billionis has decided to invest in cryptocurrencies. 
You are asked to develop a Python program that allows Paperius to calculate the value of his investments.

The system must read data from two CSV files: the file *token.csv* and the file *token_prices.csv*. 

The file *token.csv* contains the following information, separated by semicolons:

```
Token;Quantity
```

*Token* represents the name of the purchased coin and *Quantity* represents the quantity that has been purchased. For example, the row 

```
BTC;0.01
```

means that Paperius owns 0.01 BTC (bitcoin). 

The file *token_prices.csv* contains the following information, separated by semicolons:

```
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
- compute (and print following the format shown in the example), for each date present in the file "token_prices.csv", the value of Paperius’s portfolio, based on the value of the tokens he owns on that date. For simplicity, assume that Paperius does not sell or buy any tokens during the considered time interval;
- print the date on which Paperius’s portfolio reached its maximum value, and show what the value of the portfolio was on that date;

## Example
**File token.csv**
```
Token;Quantity
BTC;0.01
ETH;1
XRP;50
```

**File token_prices.csv**
```
Data;Token;Price_USD
2025-11-01;BTC;110026.69
2025-11-02;BTC;110066.94
2025-11-03;BTC;110650.21
...
2025-11-01;ETH;3874.25
2025-11-02;ETH;3872.93
2025-11-03;ETH;3910.09
...
2025-11-01;XRP;2.50
2025-11-02;XRP;2.50
2025-11-03;XRP;2.53
...
2025-11-01;SOL;185.94
2025-11-02;SOL;186.36
2025-11-03;SOL;187.67
...
2025-11-01;BNB;1093.74
2025-11-02;BNB;1094.41
2025-11-03;BNB;1083.70
```

**Output**
...

Number of days: 10
```
```
Date              Value (USD)
2025-11-01        5099.52
2025-11-02        5098.60
2025-11-03        5143.09
2025-11-04        4781.43
2025-11-05        4422.05
2025-11-06        4582.25
2025-11-07        4432.65
2025-11-08        4584.31
2025-11-09        4538.36
2025-11-10        4741.85
...

Date of maximum value: 2025-11-03, value: 5143.09
```

FILES
token.csv
token_prices.csv
