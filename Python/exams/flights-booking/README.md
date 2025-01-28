# FLIGHTS BOOKING

A flight company wants to implement a booking application for its flights. Each flight is represented by a code, and is performed by an airplane with a given arrangement of seats.
The flight and airplane information is given in a file **flights.txt**. Each row of the file corresponds to a different flight, and has the following format:

`<FlightID> <AirplaneModel> <ROWS> <COLS>`

where `<FlightID>` is a string that does not contain white-spaces that corresponds to the identifier of the flight, `<AirplaneModel>` is the name of the airplane (assume it does not contain white-spaces) and `<ROWS>` and `<COLS>` are two integers that correspond to the number of rows and the number of seats per row of the plane (assume all rows have the same number of seats).

For example, a line

`AZ1452 A320 2 3`

corresponds to the flight `AZ1452`, performed by an airplane `A320` which contains `2` rows of `3` seats each.

A second file **bookings.txt** contains the booking requests to process. Each line of the file corresponds to a booking request, and has the format

`<opCode> <FlightID> <Name> <Surname> [number of seats]`

where `<opCode>` is the string "BOOK" or the string "CANCEL", `<FlightID>` is the identifier of the flight, `<Name>` and `<Surname>` are strings (without white-spaces) containing the information of the client who is requesting the booking, and `[number of seats]` is an integer corresponding to the number of requested seats. The field `[number of seats]` is present  only if the `<opCode>` field is "BOOK".

The program should process each request and, whenever possible, book or cancel, depending on the `<opCode>` string, the requested seats:

* when the `<opCode>` is "BOOK", the program must reserve, if possible, the requested number of seats for the client on the specified flight. The seats must be booked starting from the first row, first column, and proceeding in a left-to-right, top-to-bottom order (i.e., a row should be filled before the next row is considered). If the booking request cannot be fulfilled completely, no seats should be booked for the client, and the program should print an error message containing the request followed by the string " - Fail" (see the example below)
* When the `<opCode>` is "CANCEL", the program must remove all seats (if any) booked by the given person on the given flight.

After all requests have been processed, the program should print, for each flight, the flight name followed by the booked seats information. For each booked seat, the program should print its row and column (counting from 1) and name of the person that booked it (see the example below).

**Note:** The following is just an example, the program must not make **<u>any</u>** assumption on the input files except for what explicitly stated in the text above.

Given the following file **flights.txt**

``
AZ1452 A320 2 3
OS316 A330-300 3 3
LH1120 767-300ER 3 2
``

and the following file **bookings.txt**

``
BOOK AZ1452 Jane Smith 1
BOOK AZ1452 John Thompson 3
BOOK OS316 Bob Green 2
BOOK OS316 William Evans 4
BOOK AZ1452 Sarah Taylor 3
BOOK AZ1452 John Davies 2
CANCEL AZ1452 John Thompson
CANCEL OS316 Bob Green
BOOK LH1120 Anne Brown 2
BOOK OS316 Daniel Walker 4
BOOK OS316 Clara Taylor 3
CANCEL OS316 William Evans
BOOK OS316 Elizabeth Smith 3
BOOK OS316 Anne White 4
BOOK AZ1452 Robert Wilson 2
BOOK AZ1452 Jack Brown 2
``
the program should print the following:

``
BOOK AZ1452 Sarah Taylor 3 - Fail
BOOK OS316 Clara Taylor 3 - Fail
BOOK OS316 Anne White 4 - Fail
BOOK AZ1452 Jack Brown 2 - Fail
Flight AZ1452:
1 1 Jane Smith
1 2 Robert Wilson
1 3 Robert Wilson
2 2 John Davies
2 3 John Davies
Flight LH1120:
1 1 Anne Brown
1 2 Anne Brown
Flight OS316:
1 1 Daniel Walker
1 2 Daniel Walker
1 3 Elizabeth Smith
2 1 Elizabeth Smith
2 2 Elizabeth Smith
3 1 Daniel Walker
3 2 Daniel Walker
``

FILES
flights.txt
bookings.txt

