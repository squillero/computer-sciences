# FOOTBALLERS ASTROLOGY

Develop a program to check whether astrology has any effect on the performance of soccer players.

A text file called `sportive.csv` contains information on the players who have scored more than 500 goals (source: https://en.wikipedia.org/wiki/List_of_footballers_with_500_or_more_goals), where each line contains the
information relating to a sportsman. The information, reported in fields separated by commas, are: the surname and name
of the sportsman, the number of goals scored in his career, the nationality and finally the date of birth (in
format dd / mm / yyyy). The first lines of the file, for example, are:

    Abe Lenstra, 710, Netherlands, 11/27/1920
    Alfredo Di Stéfano, 513, Argentina, 04/07/1926
    Boy Martin, 541, Ireland, 02/01/1914
    Cristiano Ronaldo, 798, Portugal, 05/02/1985

A second file called `zodiac.csv` contains, for each zodiac sign, the start and end dates of that sign
zodiacal (in dd / mm format), in fields separated by commas. Eg:

    Aries,21/03,20/04
    Taurus,21/04,20/05
    ...etc...

The program will have to read both files, and add up the goals scored by the different players belonging to each one
of the zodiac signs, and then create a histogram of the goals attributable to each sign and print it on the screen.
The histogram must show, for each sign: the name of the sign, the total number of goals, a bar of asterisks of
length proportional to the total score. The data must be printed in descending order of the total score.
The scale of the histogram must be determined so that the longest bar has 50 asterisks.

Example:

    Aquarius (5283) ********************************************** ****
    Cancer   (3593) **********************************
    Scorpio  (3344) *******************************
    Libra    (3257) ******************************
    ... etc...

** Important hint **: for comparing dates, it is suggested to construct the date, as a string, in the format 'mmdd' (for example '25/06/2021 'becomes' 0625'). With this format, the comparison of dates (by itself very complex) is reduced to a simple lexicographic comparison between strings.

It is assumed that the files present do not contain errors. 