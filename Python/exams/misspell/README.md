# MISSPELL A NAME

The famous comedian Apelle Ridoacrepa needs a Python program able to create a list of funny words very similar to a given name. Practically speaking, the program must return the list of words that only differ in only one letter from the given name.

For example, if the given name is *Leonardo*, the list of valid Italian words is only *leopardo*, in the case the name is *Martina*, the program returns as a list containing: *mattina*, *sartina*, *tartina*, and so on.

The program reads a list of valid words (a default file fixed in the program code), and a file containing a list of names to misspell. The list of names, is given by asking the user to introduce the file name. In both of the files, the contained information (words and names) is provided by line, that is only one name or word in every line.

Assuming that the file with the list of words is named parole_italiane.txt, the program must ask the user for the file containing the list of names to misspell:

    Please, introduce the name of the file with the names:
    name.txt

then, the program must find all the words differing only by one letter from the list of names and print them in the screen. It is important to note that Capital and lower case letters are considering the same, so for example, *M* equals to *m*.

The results must be presented showing the original name, and the misspelled words ordered alphabetically without including again the original name. In the case, there are no words that only differ by one letter from the original name, the program must show a warning message.

## Example

file with the names (names.txt)

    Martina
    Valentina
    Leonardo
    Gennaro

output expected

    Name: Martina
    cartina
    maltina
    margina
    marsina
    martino
    martira
    mattina
    sartina
    tartina

    Name: Valentina
    salentina
    valentino

    Name: Leonardo
    leopardo

    Name: Gennaro
    WARNING: No similar words were found!!!

In the example, notice that the resulting misspelled words have the same number of characters than the original one.
