# MURPHY'S LAWS

Consider a text file, named `Murphy_reads.txt`, which contains some of the maxims derived from the famous * Murphy's law *.

In the text file, each maxim is made up of _two or more_ lines of text: on the first line there is the ** title ** of the maxim, on the following lines there is the ** statement **. The different maxims are separated from each other by a blank line.

Eg:

    Principio degli elementi persi
    Il raggio di caduta dal banco di lavoro di piccoli elementi varia inversamente alle loro dimensioni e 
    direttamente alla loro importanza per il completamento del lavoro intrapreso.

    Legge di Perussel
    Non c'è lavoro tanto semplice che non possa essere fatto male.

    Regola di Ray sulla precisione
    Misura con un micrometro.
    Segna con un gessetto.
    Taglia con un'ascia.

    Legge dei semafori
    Se è verde non hai fretta.

    Legge di Pudder
    Chi ben comincia, finisce male. Chi comincia male, finisce peggio.

    Seconda Legge di Horowitz
    In qualunque momento tu accenda la radio, sentirai le ultime note della tua canzone preferita.

    Legge di Vile sul valore
    Più un oggetto costa, più lontano bisognerà spedirlo per farlo riparare.


A second text file, named `arguments.txt` contains a series of words (one per line, without spaces or punctuation).

Eg:

    male
    fretta
    lavoro


Write a Python program to identify Murphy's laws that address certain topics.

The program must identify all maxims in which at least one of these words appears
** in the statement ** (it doesn't matter whether it appears in the title or not).
The searched word must appear as a "complete" word in the text, partial matches are not allowed.
For example, if the word were "with", a maxim containing "accounts" should not be selected.
The comparison must be done by ignoring the difference between upper and lower case, and removing the punctuation characters.

If a maxim contains more than one word to search for, it must still be printed only once.
For the maximum corresponding to the criterion, print the title (complete) and the beginning (first 50 characters)
of the statement. If the statement were longer than 50 characters, indicate with '...' the fact that it was truncated.

In the case of files with the contents indicated in the examples, the program must produce the following output:

    Principio degli elementi persi - Il raggio di caduta dal banco di lavoro di piccoli...
    Legge di Perussel - Non c'è lavoro tanto semplice che non possa essere...
    Legge dei semafori - Se è verde non hai fretta.
    Legge di Pudder - Chi ben comincia, finisce male. Chi comincia male,...


(Source: http://www.fenice.info/Wisdom/Aforismi/index.asp)
