# Computing statistics in a ASCII file

An ASCII art company is trying to compute some statistics on theirs pictures. For doing so, the company is needing a Python program able to compute the statistics in the use of the different characters on their pictures.

You are asked to write a Python program that opens a text file named `landscape.txt`, that contains a picture converted in ASCII characters. The size of the picture is not known a priori.

Then, the program asks the user where to compute the statistics, for doing so, the program must ask for the position of a square in the picture. The square position is given by asking a coordinate `(X,Y)` and the square size N, the coordinate indicates the upper left corner of the square. Assuming that in the original image, the upper left corner has the coordinate `(0,0)`, the program must check if the provided square is placed inside the picture or not. In the negative case, the program terminates showing the user an error.

Once a useful square is read, the program must count in the mentioned area the occurrences of each character and provide this information as a percentage.

The program must be structured using functions, and errors regarding the file manipulation must be handled.

## Example

For example, if the `landscape.txt` file is:

```
^^^^^^^~~^~^~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^^^^!YJYY7^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^^^^!PPPPJ~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^^^^!5PPPJ!~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^^^!5PPPPPJ!^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^^^^YPPPPP7~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^^^^JPPGP57^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^^^!YPGP5PJ!~^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^^~J5555555!~^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^!!J5555555!^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
^^^^!!7YYYYYYY!^^~~~~~~~~~~~~~~~~~~!!!!!!!!~
^^^~7!!777777777???JJJ?JJJJYYYYYYYYYYYYY5557
YY5555???77J?77J5YYJJJYY555555PPP5PP5555555?
GPGG5PPPP55PYYJ?JYYY?!!!7???JJJ????????????7
JYYJ?755?J5GP55???7?!^^:~7Y5J77?JJYY5JJYY?77
JP55Y~7777?JJ?7????777777J55PJ!!7J55??7???JY
PBGGP??77??7???J???????77777???7?JPGPPPYJJY5
J5PG5!!777?P5??7?J??7!7??777J5775GGGGGGGGGPP
JJ?Y5J?!!!?5YJJJYPJ7????7!7!7??7?YYYJJJ??J?7
```

and the user introduces the following information:

```
Please, enter the coordinates (x,y):
6,1
Please, enter the square size:
10
```

so the part of the figure to analyze is:</p>

```
^!YJYY7^^^
^!PPPPJ~^^
^!5PPPJ!~^
!5PPPPPJ!^
^YPPPPP7~^
^JPPGP57^^
!YPGP5PJ!~
J5555555!~
J5555555!^
7YYYYYYY!^
```

so, the program must print:

```
P-> 23.0%
5-> 18.0%
^-> 17.0%
Y-> 12.0%
!-> 11.0%
J->  8.0%
~->  5.0%
7->  4.0%
G->  2.0%
```

On the contrary, considering the same file,

```
Please, enter the coordinates (x,y):
26,13
Please, enter the square size:
10
```

the program must print:

```
ERROR!! the square to analyze is out of limits.
```
