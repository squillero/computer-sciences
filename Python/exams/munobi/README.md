# MUNODI SEQUENCES

A Munodi sequence is a sequence of `k` integer numbers `c[0], c[1], ..., c[k]` where `c[n+1] = c[n]/2`  if `c[n]` is even or `c[n+1] = 3*c[n]+1` if `c[n]` is odd. The sequence teminates when *one* appears (i.e., `c[k-1] = 1`).

Note: Whatever number is used as `c[0]`, the Munodi sequence is guaranteed to be finite.

Given the file `seq.dat` containing an unknown number of integer sequences, one per line, with number separated by spaces; write a Python program that check if the sequences are Munodi sequences and print the result on the screen.

If the sequence is a Munodi sequence, the program should also print its length. For example

**`seq.dat`**  
> `12 6 3 10 5 16 8 4 2 1`  
> `12 6 3 10 4 16 8 4 2 1`  
> `7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1`  
> `1`  

**`Output:`**  
> `Sequence 1 is a Munodi sequence (length 10)`  
> `Sequence 2 is NOT a Munodi sequence`  
> `Sequence 3 is a Munodi sequence (length 17)`  
> `Sequence 4 is a Munodi sequence (length 1)`  
