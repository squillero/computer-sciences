# LingoWeave

In the game "LingoWeave" the score of a "word" over a "pattern" is calculated as the number of times a word can be read in the pattern times the length of the word. If more words get the same score, only the first one is rewarded and all the others get 0.

For example, the pattern "AABBBABBBAA"

- The score of the word "BBB" is 6 ("BBB" appears 2 times; $score = 2 * 3 = 6$).

- The score of the word "ABBBA" is 10 ("ABBBA" appears twice, since the third "A" of the pattern is both the last letter of the first "ABBBA" and the first of the second; $score = 2 * 5 = 10$).

- The score of the word "BB" is 8 ("BB" appears four times; $score = 4 * 2 = 8$).

- The score of the word "ABB" is 0 ("ABB" appears 2 times, but the score 6 has already been assigned to "BBB").

Write a program that reads the pattern from a file named 'pattern.txt' and a list of unique words from a file named 'words.txt', one word per line. The program should print the list of the words with a positive score (i.e., $score > 0$) in decreasing order of score, each one followed by a colon ':', a space, and its score.

## EXAMPLE

pattern.txt

```
OOxxxOxxxOOOxxOOxOxOOO
```

words.txt

```
OxxxO
xx
OOxOO
OOOx
Oxx
xxx
```

The result is:

```
OxxxO: 10
Oxx: 9
xxx: 6
OOOx: 4
```
