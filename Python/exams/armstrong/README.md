# Armstrong Numbers

An [Armstrong number](https://en.wikipedia.org/wiki/Narcissistic_number) of *n* digits is an integer such that the sum of its digits each one to the power of *n* is equal to the number itself.

For example, 9,474 is an Armstrong number as

$$9^4 + 4^4 + 7^4 + 4^4 = 9474$$

All 1-digit numbers are obviously Armstrong numbers.

Write  program that reads a sequence of numbers, one number per line, from the file `numbers.txt`; and copies the Armstrong numbers to the new file `armstrong.txt`, one number per line, in the same order.

For example, given this `numbers.txt`:

```
42
7
1634
1743
2
45656
565
371
407
8208
153
6
4646
370
9474
9475
```

The resulting `armstrong.txt` should be:

```
7
1634
2
371
407
8208
153
6
370
9474
```
