# DISCOGRAPHY

Create a program structured in Python language that manages the database of a record company. The
information is contained in a series of files. The main file is called `artists.txt` and contains, one per line,
the code of the artist, or of the band, and the name of the file where all the songs are contained. For example, the
`artists.txt` file may contain:

    01023;queen.txt
    02346;kiss.txt
    16750;acdc.txt

Where is it:

- the first field is a 5-digit numeric code;
- the second field is a string indicating the name of the file that contains the songs of the artist / band.
  This file stores, one per line, the year of recording and the title of the piece (not sorted
  by date of engraving);
- assume that the format of all files is correct.

For example, in the `queen.txt` file you can find:

    1980;Crazy Little Thing Called Love
    1985;It's a kind of magic
    1978;Under pressure

The following information may be stored in the `kiss.txt` file:

    1980;Two Sides of the Coin
    1985;King Of The Mountain
    1979;I Was Made for Lovin 'You

And in the `acdc.txt` file you can find:

    1978;Kicked In The Teeth
    1985;Playing with Girls
    1985;Shake Your Foundations
    1990;Thunderstruck

The program must:

1. upload the information relating to all the songs of all the artists;
2. print the title of all the songs of each year, recorded by any one, in ascending chronological order
   artist / band, flanked by the band code.

## Example of output using the files described above:

    1978:
    Under pressure                 01023
    Kicked In The Teeth            16750
    1979:
    I Was Made for Lovin 'You      02346
    1980:
    Crazy Little Thing Called Love 01023
    Two Sides of the Coin          02346
    1985:
    It's a kind of magic           01023
    King Of The Mountain           02346
    Playing with Girls             16750
    Shake Your Foundations         16750
    1990:
    Thunderstruck                  16750 