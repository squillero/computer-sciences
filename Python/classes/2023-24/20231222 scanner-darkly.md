# SCANNER DARKLY

Undercover narcotics cop Bob Arctor must review the transcript of wiretaps phone calls made at the house where he works undercover and delete all references that could identify him. To help him you must develop a Python program that automates this procedure.

The wiretaps are saved in the file `wiretap.txt`, which contains only lowercase characters, spaces, and *carriage return*, so it contains neither punctuation nor apostrophes. Words are separated using a number of spaces proportional to the length of the pauses, and when the recorded voice changes, the file will wrap.

The program will have to read the `wiretap.txt` file and write a new `censored.txt` file, where the original text will be modified by deleting the lines containing the words *"bob"* and/or *"arctor"* and also deleting the two lines preceding and the two lines following them.

In addition, the program must check whether Bob's secret identity is in danger. To do this, it will have to print on the screen whether, in the original text of the `wiretap.txt` file, both the word *"polizia"* and the names *"bob"* and/or *"arctor"*, and if so it will have to print what is the minimum distance (measured as the number of lines in the file) between the word *"polizia*" and the nearest of the words *"bob"* and *"arctor"*. Otherwise it will have to report that the word *polizia* and the names *Bob* and *Arctor* were not pronounced together.

There are no compound words in the `wiretap.txt` file that contain `'bob'`, `'arctor'` or *"polizia"*.
