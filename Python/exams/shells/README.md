# SHE SELLS SEA SHELLS BY THE SEA SHORE

Miss Shelley decided to sell her collection of sea shells on the sea shore. Each shell has a price and she decided to tempt potential buyers with offers. For example, anyone who buys two *Abalone* shells will get a *Drupe* shell for free.

* The file `prices.dat` contains the list of shells and their unit price. The file consists of multiple lines, the format of each line is `shell: price`. The shell name does not contain spaces. The price is in Euro and can contain Eurocents.

* The file `offers.dat` contains the offers. The file consists of multiple lines, the format of each line is `shell1 shell2 ... shellN: shell*`. Each line specifies the shells that must be purchased to get the free one. For example, if everyone who buys two *Abalone* shells gets a free *Drupe* shell, the file would contain the line `Abalone Abalone: Drupe`. Note: neither the shells that created a gift nor the one received can generate further gifts.

* The file `cart.dat` contains the list of shells that the customer wants to buy. The file consists of multiple lines, each line containing the name of a shell.

Write a program that calculates the final price of the cart, not considering the shells that the customer could get for free. The program should display one line for every offer matched in the form `As you buy shell1, shell2, ..., shellN; you got shellx for free`, and the final price in the form: `Final price: x.yy EUR`

For instance, with the given input files, if the cart contains 6 Nautilus shells, the final price is only 14.95 EUR (ie. 2.99 x 5), because 1 Nautilus shell is a gift if a customer buy 4 ("pay 4 get 5 rule": `Nautilus_Shell Nautilus_Shell Nautilus_Shell Nautilus_Shell: Nautilus_Shell`).

## Example

### File `prices.dat`

```text
Abalone: 19.99
Melo_Melo: 4.99
Murex: 2.5
Nautilus_Shell: 2.99
Oyster_Shell: .5
Sand_Dollar: 2.5
Small_Strombus_Gigas: 2500
Venus_Comb: 75
```

### File `offers.dat`

```text
Abalone Abalone: Drupe
Conus_Gloriamaris: Cowrie
Nautilus_Shell Nautilus_Shell Nautilus_Shell Nautilus_Shell: Nautilus_Shell
Murex Murex Murex: Oyster_Shell
```

### File `cart.dat`

```text
Nautilus_Shell
Nautilus_Shell
Nautilus_Shell
Abalone
Drupe
Abalone
Nautilus_Shell
Nautilus_Shell
Nautilus_Shell
```

### Program output

```text
As you buy Abalone, Abalone; you got Drupe for free
As you buy Nautilus_Shell, Nautilus_Shell, Nautilus_Shell, Nautilus_Shell; you got Nautilus_Shell for free
Final price: 54.93 EUR
```

## More information

[Ismo](https://www.youtube.com/watch?v=HdLwyyDOc_g) sketch on the topic.
