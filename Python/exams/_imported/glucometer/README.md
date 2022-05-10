# GLUCOMETER

The new generation of wearable devices allow patients with diabetes mellitus to be continuously monitored
and non-invasive blood sugar. The values ​​of the individual devices are sent on a daily basis to a data center
which assembles a single file containing the data of all patients connected to the monitoring service. You want
create a program capable of extracting some statistics. Specifically, a check on the
exceeding the maximum level of 200mg/dL.

Technical specifications follow.

The program has to manage a `glucometers.txt` input file containing the data of a whole day of measurement.
This file must be understood as an aggregate of the data collected and therefore containing, in no particular order, the data of all
patients.

Data for a single patient is in chronological order and missing measurements may occur (intervals in which
the patient is not wearing the device).

All measurements are made on a regular basis: one sample every 5 minutes.

Each line of the file contains 5 different data separated by a single space and in the following order:

1. patient identification code consisting of 4 hexadecimal characters (PPPP format);
2. acquisition time (hh:mm format)
3. blood glucose value (g)
4. body temperature (°C)
5. heart rate (bpm).

The program, after storing the data in an appropriate data structure, will have to print the list of all the
patients who have recorded at least one exceedance and, for each exceedance, the time and blood glucose level
corresponding. The list must appear in order of criticality, starting with the patient with the most exceedances

# File input example:

    1BF0 17:00 160 37.0 68
    1BF0 17:05 168 37.0 68
    1BF0 21:00 180 37.3 66
    1BF0 21:05 210 37.1 67
    0AE1 21:10 187 37.3 69
    0AE1 21:15 192 37.3 70
    0AE1 21:20 195 37.4 70
    0AE1 21:25 201 37.4 75
    BBB3 22:30 108 37.5 73
    BBB3 22:35 200 37.5 73
    0AE1 23:05 203 37.4 73
    0AE1 23:10 210 37.5 71
    1BF0 21:10 213 37.2 68

# Example output file:

    0AE1 21:25 201
    0AE1 23:05 203
    0AE1 23:10 210
    
    1BF0 21:05 210
    1BF0 21:10 213
  
    BBB3 22:35 200 
 
