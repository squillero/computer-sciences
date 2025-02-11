# QUANTUM WOBBLETRON 3000

The *Quantum Wobbletron 3000*, a powerful yet delicate machine, requires constant monitoring of its operational reports to detect any malfunctions.

The reports are stored in a file, with each report on a separate line. Each report is a list of numbers called *levels*, separated by spaces. For instance, six reports, each containing between three and five levels, could appear as follows:

```
7 6 4 2 1
1 2 7 8
9 7 6 2
1 3 2 4 5
1 3 6 7 9
8 8 1
```

When the Wobbletron operates correctly, levels are either **gradually increasing** or **gradually decreasing**. That is, a report only counts as correct if both of the following are true:

- The levels are either all increasing or all decreasing.
- Any two adjacent levels differ by at least one and at most three.

In the example above, the reports can be found **correct** or **incorrect**:

- `7 6 4 2 1`: **correct** because the levels are all decreasing by 1 or 2.
- `1 2 7 8`: **incorrect** because 2 7 is an increase of 5.
- `9 7 6 2`: **incorrect** because 6 2 is a decrease of 4.
- `1 3 2 4 5`: **incorrect** because 1 3 is increasing but 3 2 is decreasing.
- `1 3 6 7 9`: **correct** because the levels are all increasing by 1, 2, or 3.
- `8 8 1`: **incorrect** because 8 8 is neither an increase nor a decrease.

So, in the above example, 2 reports are correct.

Read the file `reports.dat` containing an arbitrary number the reports of arbitrary length; create a file `correct-reports.dat` containing all the correct reports in exactly the same format and in the same order; and print on screen the total number of reports and the percentage of the correct ones with 2 decimal digits, that is:

```
Read 6 reports: 33.33% correct
```
