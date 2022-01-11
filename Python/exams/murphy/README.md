# MURPHY'S LAWS

Consider a text file, named `Murphy_reads.txt`, which contains some of the maxims derived from the famous * Murphy's law *.

In the text file, each maxim is made up of _two or more_ lines of text: on the first line there is the ** title ** of the maxim, on the following lines there is the ** statement **. The different maxims are separated from each other by a blank line.

Eg:

    Principle of the lost elements
    The radius of fall from the workbench of small elements varies inversely with their size and
    directly to their importance for the completion of the work undertaken.
    
    Perussel's law
    There is no such simple job that cannot be done wrong.
    
    Ray's rule of accuracy
    Measure with a micrometer.
    Mark with a piece of chalk.
    Cut with an ax.
    
    Law of traffic lights
    If it's green, you're not in a hurry.
    
    Pudder's law
    Who starts well, ends badly. Those who start badly end up worse.
    
    Second Law of Horowitz
    Whenever you turn on the radio, you will hear the last notes of your favorite song.
    
    Vile's law of value
    The more an item costs, the farther it will have to be shipped to have it repaired.


A second text file, named `arguments.txt` contains a series of words (one per line, without spaces or punctuation).

Eg:

    bad
    rush
    work


Write a Python program to identify Murphy's laws that address certain topics.

The program must identify all maxims in which at least one of these words appears
** in the sentence ** (it doesn't matter whether it appears in the title or not).
The searched word must appear as a "complete" word in the text, partial matches are not allowed.
For example, if the word were "with", a maxim containing "accounts" should not be selected.
The comparison must be done by ignoring the difference between upper and lower case, and removing the punctuation characters.

If a maxim contains more than one word to search for, it must still be printed only once.
For the maximum corresponding to the criterion, print the title (complete) and the beginning (first 50 characters)
of the statement. If the statement were longer than 50 characters, indicate with '...' the fact that it was truncated.

In the case of files with the contents indicated in the examples, the program must produce the following output:

    Principle of the lost elements - The radius of falling from the workbench of small ...
    Perussel's Law - There is no such simple job that it cannot be ...
    Law of traffic lights - If it is green you are not in a hurry.
    Pudder's Law - Whoever starts well ends badly. Who starts badly, ...


(Source: http://www.fenice.info/Wisdom/Aforismi/index.asp)