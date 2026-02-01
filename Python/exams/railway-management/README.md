# RAILWAY LINE MANAGEMENT

Write a Python program for the management of a regional railway line. The program must read the set of scheduled trips for a day from the file **corse.txt**. Each line of the file contains the trip identification code, the ordered sequence of stations where the train will stop, and the arrival time at each station, in the following format:  

```
TripCode DepartureStation:hh:min Station1:hh:min Station2:hh:min Station3:hh:min ... ArrivalStation:hh:min
```

where `TripCode` is a string, `DepartureStation` and `ArrivalStation` are respectively the names of the station where the trip begins and where it ends; `StationN` indicates the name of the N-th station where the train stops; finally, `hh:min` corresponds to the departure time from each station. 

The program must perform the following three operations numbered from 1 to 3:

1. **Print the list of stations**: the program prints on the screen, in alphabetical order, the list of all stations served by the trains of the line, without duplicates.
2. **Print the timetable**: the program identifies all trips that stop at a specified station starting from a certain time and prints the result on the screen. For each identified trip, the following must be printed: the trip code, the departure time, and the final destination of the trip.  
3. **Search for shortest journey**: the program searches for and prints on the screen the direct journey **(without transfers)** with minimum total duration between a departure station and an arrival station, starting from a specified time. If no direct train exists, the program prints: There are no direct trains between the entered stations after the specified time.

The user operations to be performed are saved in the file **operazioni.txt**. Each line of the file contains the information for a single operation to be executed. When the first field of the line in the file **operazioni.txt** is the word `Stazioni`, operation 1 must be executed. If it is the word `Orario`, the line will also contain the name of a station and a departure time, which are input data to perform operation 2. Finally, if the first field is `Viaggio`, the line will also contain a departure station, a departure time, and an arrival station, which represent input data to perform operation 3. 

**Hint**: since all trips are performed on the same day, to compare two departure/arrival times, it is sufficient to convert them into minutes. 

## Example 

**File corse.txt**
```
R101 Torino:08:00 Chivasso:08:18 Santhia:08:40 Vercelli:08:55 Novara:09:10 Oleggio:09:25 SestoCalende:09:40 Gallarate:09:55 Busto:10:05 Milano:10:20

R102 Milano:07:45 Rho:07:58 Legnano:08:10 Busto:08:18 Gallarate:08:28 SestoCalende:08:42 Oleggio:08:55 Novara:09:10 Vercelli:09:28 Santhia:09:45

R103 Novara:10:00 Oleglio:10:13 SestoCalende:10:28 Gallarate:10:42 Busto:10:55 Legnano:11:05 Rho:11:18 Milano:11:35

R104 Vercelli:11:20 Novara:11:35 Oleggio:11:48 SestoCalende:12:02 Gallarate:12:18 Busto:12:30 Legnano:12:42 Rho:12:55 Milano:13:10

R105 Santhia:12:15 Vercelli:12:30 Novara:12:45 Gallarate:13:10 Busto:13:20 Rho:13:35 Milano:13:50

R106 Milano:15:00 Gallarate:15:38 SestoCalende:15:52 Oleggio:16:05 Novara:16:20 Vercelli:16:40 Santhia:16:55 Chivasso:17:15 Torino:17:35

**File operazioni.txt**
```
Stazioni
Orario Gallarate 10:00
Viaggio Novara 11:00 Milano
```

**Output**:
```
Ordered list of stations served:  Busto, Chivasso, Gallarate, Legnano, Milano, Novara, Oleggio, Oleglio, Rho, Santhia, SestoCalende, Torino, Vercelli.
```

Timetable for Gallarate station from 10:00 onwards: R103 10:42 bound for Milano; R104 12:18 bound for Milano; R105 13:10 bound for Milano; R106 15:38 bound for Torino.

Shortest journey from Novara to Milano from 11:00 onwards Train: R105 Departure: Novara 12:45; Arrival: Milano 13:50; Journey Duration: 1h 5min.
```
