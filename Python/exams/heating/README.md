HEATING
=======

Write a Python program that allows managing data related to heating consumption of two buildings managed by the same company. Each building is described by a CSV file, respectively `building1.csv` and `building2.csv`.

The CSV files contain the information in the same format. The first row contains the column headers and is constant. The following rows contain information related to heating consumption in Watt at one-hour intervals. The reported information, separated by commas (`,`), are: 

- timestamp, meant as date (in the format `dd-mm-yyyy`) and time (in the format `hh:mm`) separated by a space;
- corresponding consumption in Watt.  
  The program must report an error if a file is missing or not processable, and terminate execution. 

The program must:

1. Report the duration of the period analyzed in the files, expressed in months and days  
2. Calculate the total monthly consumption, including all buildings  
3. Report the maximum total monthly consumption and the minimum total monthly consumption  
4. List the total monthly consumption month by month  
5. Calculate the daily consumption for each building  
6. Report for each building the average daily consumption and the maximum daily consumption, also reporting in the latter case the corresponding date (in case of a tie, the choice is arbitrary)

## Example

Excerpt of file "building1.csv"

```
timestamp,value
21-11-16 0:00,0
21-11-16 1:00,0
21-11-16 2:00,0
21-11-16 3:00,0
21-11-16 4:00,0
21-11-16 5:00,0
21-11-16 6:00,0
21-11-16 7:00,1989.304313
21-11-16 8:00,1989.304313
21-11-16 9:00,1989.304313
21-11-16 10:00,1989.304313
21-11-16 11:00,1989.304313
21-11-16 12:00,1989.304313
21-11-16 13:00,1989.304313
...
```

Example of output:

```
Analyzed period: 7 months, 175 days
Consumption in the analyzed period:
maximum monthly consumption: 1019628.69W
minimum monthly consumption: 61376.38W

Monthly consumption:
November: 280746
December: 1019628
January : 879074
February: 640318
March : 521610
April : 297058
May : 61376

Statistics:
building 1: average daily consumption 14395.52W, maximum daily consumption 36514.18W (26-12-16)
building 2: average daily consumption 6746.27W, maximum daily consumption 17111.90W (26-12-16)
```
