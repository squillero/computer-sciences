# UNSAFE MEAT

The United States Department of Agriculture (USDA) via its Food Safety and Inspection Service (FSIS) periodically identifies batches of meat that could cause serious health issues or death. Eventually, shops are required to stop selling the batches, remove them from shelves, and segregate them from other inventory.

The IT department of the supermarket "Bargain Butcher" periodically receives a file containing the batch numbers identified by FSIS as dangerous and the list of batches purchased by the supermarket. 

In more detail, the file consists of a list of dangerous batch *ranges* `b1-b2`, a blank line, and a list of purchased batch numbers. Neither ranges nor batch numbers are sorted. For example:

```
3-5
10-14
16-20
12-18

17
1
8
5
32
11
```

The dangerous batch ranges are inclusive: the range `3-5` means that batches number 3, 4, and 5 are all dangerous. Note that the ranges can overlap; a batch of meat is unsafe if it is in any range. In this example:

- Batch number 17 is dangerous because it falls into range 16-20 as well as into range 12-18.
- Batch number 1 is safe because it does not fall into any range.
- Batch number 8 is safe.
- Batch number 5 is dangerous because it falls into range 3-5.
- Batch number 32 is safe.
- Batch number 11 is dangerous because it falls into range 10-14.

Write a Python program that reads the report from the file `report.txt`, identifies the dangerous batches purchased by the supermarket, and prints their numbers. No specific sorting is required.

With the file in the example, the output could be:

```
17
5
11
```
