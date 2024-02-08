# Connect Four

The goal is to create a program to play "Connect Four". The game "Connect Four" is similar to "Tic-Tac-Toe", as it requires players to create a row of four discs of the same color (vertically, horizontally, and diagonally) to win. The key feature of the game, making it unique, is the "gravity force": the game board is placed vertically between the players, and the discs are dropped down a vertical grid, so that a disc placed in a certain column will always occupy the lowest available position in that column.

The game grid consists of six rows and seven columns.

Write a program that:

- Print the grid in the beginning of the game and after each move. Empty position in the grid is indicated with the character "-", moves of the player G1 are marked as "O", of the second, as "X" (see below).
- Reads the players' moves from the file **moves.txt**. This file contains lines formatted as follows:

```
G1 0  
G2 1  
G1 2  
G2 2
```

Where the first value is the player (G1 or G2) and the second value is the column in which the disc is placed (assuming the columns have indexes from 0 to seven, from left to right);

- once the move is read, the program must "insert" the player's disc into the grid, considering the force of gravity (the disc descends to the lowest available position). Note that, in a grid cell, there **cannot** be two discs simultaneously; rather, when dropped from above, the discs stack on top of each other;
- once the cell where the player's disc ends up is identified, the program must update the grid, inserting the symbol "O" for player 1 (G1) and "X" for player 2 (G2), and must print who just made the move, and the updated grid;
- after each move, the program must check if the player who just moved has won, by checking for a sequence of four identical discs (in a row) horizontally, vertically, and diagonally. For simplicity, assume that there can only be combinations of four discs starting from the last disc inserted, and proceeding in one direction only;
- if a player has won, the program must display on the screen who won and after how many moves (total). After the victory, the program should not allow the game to continue;

## Example

```
Empty Grid
-------
-------
-------
-------
-------
-------

Player G1 Plays
-------
-------
-------
-------
-------
O------

Player G2 Plays
-------
-------
-------
-------
-------
OX-----

Player G1 Plays
-------
-------
-------
-------
-------
OXO----

Player G2 Plays
-------
-------
-------
-------
--X----
OXO----

Player G1 Plays
-------
-------
-------
-------
-OX----
OXO----

Player G2 Plays
-------
-------
-------
-------
-OX----
OXOX---

Player G1 Plays
-------
-------
-------
--O----
-OX----
OXOX---

Player G2 Plays
-------
-------
-------
-XO----
-OX----
OXOX---

Player G1 Plays
-------
-------
-------
-XO----
-OXO---
OXOX---

Player G2 Plays
-------
-------
-------
-XOX---
-OXO---
OXOX---

Player G1 Plays
-------
-------
---O---
-XOX---
-OXO---
OXOX---

G1 wins in 11 moves
```
