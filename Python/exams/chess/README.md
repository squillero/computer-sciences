# MR. T PLAYS CHESS

Chess tournaments played in Politecnico di Torino adopts an oversimplified scoring system called *SELO*. The underlying idea is that a player who wins against an opponent almost the same level gets 100 points, but a player who wins against a much weaker opponent gets much less points. Playing white or black makes no difference, and players who draw do not get any points.

In details, defining the *delta* function as

```python
def delta(player_1, player_2):
    return 1 / (1 + 2**((player_1 - player_2) / 100))
```

After a match, the winner's *SELO* scores is **increased** by `200 * delta(winner, loser)`; while the loser's *SELO* is **decreased** by the same amount. *SELO* scores are integer, their value should be approximated to the closest integer after each calculation.

Write a program that reads the *SELO* scores of a set of players; the results of the game of a tournament; updates *SELO* scores according to the results; and eventually displays the list of players in decreasing *SELO* score.
In this case, all the information is provided in CSV (Comma Separated Values) files; in every line of these files, the provided values are separated by commas. In this case in particular, the first line of the files contains the field name, while the rest of the file lines contain the actual values to consider.  

In more details:

* Scores are saved inside a text file named `players.csv` containing the *name of the player* (`PLAYER`), followed by a comma, followed by the *SELO score* (`SELO`); the first line contains the field names. The order of the players is not known.
* Results are in the file `games.csv` and are in the form: *first player* (`PLAYER A`), *second player* (`PLAYER B`), *result* (`RESULT`). Fields are separated by a comma, and the first line contains the field names. The result can be either `1-0` (the first player won), `0-1` (the second player won), `1/2-1/2` (the two players tie).
* If a game is played by a player whose *SELO* score is not know, that is, the player's name did not appear in `players.csv`, it should default to *1500*.
* The format of both files is correct, but OS-related errors can occur.

# Example

## File `players.csv`

```csv
PLAYER,SELO
Magnus Carlsen,2856
Wesley So,2772
```

## File `games.csv`

```csv
PLAYER A,PLAYER B,RESULT
Magnus Carlsen,Mr. T,1-0
Wesley So,Magnus Carlsen,0-1
```

## The program should display the following output

```text
Magnus Carlsen: 2928
Wesley So: 2700
Mr. T: 1500
```

**Note:** Mr. T is not listed in the file, thus his *SELO* is assumed to be 1,500. He lost against Magnus Carlsen, but, as the difference of score is huge, players' *SELO* were not modified by the result. On the contrary, when Mr. Carlsen won against Wesley So, he got 71.68329952197911 points, rounded to 72. The same score was lost by Mr. So.
