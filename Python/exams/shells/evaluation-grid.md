# Connect Four

## BASIC PYTHON: 4

* Check `__name__` and use of `main()`: 2 point
* Coherent naming (GLOBAL_SYMBOLS + either all `snake_case` or all `camelCase`): 1
* No global symbols except for *constants*: 1

## INPUT/OUTPUT/DATA STRUCTURE: 10

* Correct open/close (either `with` or a clean `.close()` in *all* possible branches, including except): 2
* Use of `try / except`: 1
* Use of the correct `OSError` exception: 1
* Correct reading of `cart.dat` and storing in a suitable data structure (eg. list, tuple): 1
* Correct reading of `offers.dat` and storing in a suitable data structure (eg. list, tuple, dict): 1
* Correct reading of `prices.dat` and storing in a suitable data structure (eg. list, tuple, dict): 1
* Uses of a dictionary for storing `prices.dat`: 1
* Reuse of the *some* code (through a function) for handling the similarity in the format of `offers.dat` and `prices.dat`: 1
* Correct output: 1

## ALGORITHM: 12

* Calculate the price of a simple cart (see `t0`): 2
* Handling an empty offer list (see `t0`): 1
* Calculate the price of a cart where one shell is a gift (see `t1`): 3
* Calculate the price of a cart if the potential gift is not in the cart (see `t2`): 1
* Do no include gifts as for valid requisite for new gift (see `t3`): 3
* Ignore the order of the shells in the cart: 2
