# ATOMIC CHESS

*Atomic Chess* is a wild twist on regular chess!

The key difference is that when you capture a piece, it **explodes**. The explosion takes out everything in the eight adjacent squares, except pawns, and this includes your capturing piece. The game ends when one king is checkmated, or exploded.

Write a Python program to let two human players play *Atomic Chess*. The program:

1. Read the first 8 lines in the file *game.txt*, correspondng to the initial positions of the pieces in the board. Each line has 8 values, separated with '|'. The value can be a sequence of spaces, meaning that the corresponding cell of the board is empty, or one of the following: **K**ing, **Q**ueen, **R**ook, **B**ishop, k**N**ight, **p**awn, followed either by a plus (**+**) for black or by a minus (**-**) for white.

2. Display the board using ASCII characters, as shown in Example 1 and Example 2.

3. Read the other lines of the file *game.txt*: each one represents a move in the format `CR-CR` where `C` is the column (from `a` to `h`) and `R` is the row (from `1` to `8`). Square `a1` is bottom left. The first square is the *starting square*, the second is the *landing square*.

4. Check that the starting square contains a piece of the player whose move is expected. If not, discard the move.

5. Check that the landing square is empty or contains a piece of the opponent. If not, discard the move.

6. **The validity of the move does not need to be checked**.

7. Remove the piece from the starting square.

8. If the landing square was empty, simply occupy it.

9. If the landing square was occupied, then explode the piece: empty the landing square and all the square around it (up to 8) except for squares occupied by pawns.

10. If one player's king has been blasted, assign victory to the other one.

11. **Other conditions, such as *checkmate* and *stalemate*, do not need to be checked**.

## Example 1
game.txt
```
R+|N+|B+|Q+|K+|B+|N+|R+
p+|p+|p+|p+|p+|p+|p+|p+
  |  |  |  |  |  |  |  
  |  |  |  |  |  |  |  
  |  |  |  |  |  |  |  
  |  |  |  |  |  |  |  
p-|p-|p-|p-|p-|p-|p-|p-
R-|N-|B-|Q-|K-|B-|N-|R-
d2-d4
d7-d5
c2-c4
```


Output
```
--+--+--+--+--+--+--+--
R+|N+|B+|Q+|K+|B+|N+|R+
--+--+--+--+--+--+--+--
p+|p+|p+|p+|p+|p+|p+|p+
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
p-|p-|p-|p-|p-|p-|p-|p-
--+--+--+--+--+--+--+--
R-|N-|B-|Q-|K-|B-|N-|R-
--+--+--+--+--+--+--+--

Move: d2-d4
--+--+--+--+--+--+--+--
R+|N+|B+|Q+|K+|B+|N+|R+
--+--+--+--+--+--+--+--
p+|p+|p+|p+|p+|p+|p+|p+
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |p-|  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
p-|p-|p-|  |p-|p-|p-|p-
--+--+--+--+--+--+--+--
R-|N-|B-|Q-|K-|B-|N-|R-
--+--+--+--+--+--+--+--

Move: d7-d5
--+--+--+--+--+--+--+--
R+|N+|B+|Q+|K+|B+|N+|R+
--+--+--+--+--+--+--+--
p+|p+|p+|  |p+|p+|p+|p+
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |p+|  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |p-|  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
p-|p-|p-|  |p-|p-|p-|p-
--+--+--+--+--+--+--+--
R-|N-|B-|Q-|K-|B-|N-|R-
--+--+--+--+--+--+--+--

Move: c2-c4
--+--+--+--+--+--+--+--
R+|N+|B+|Q+|K+|B+|N+|R+
--+--+--+--+--+--+--+--
p+|p+|p+|  |p+|p+|p+|p+
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |p+|  |  |  |  
--+--+--+--+--+--+--+--
  |  |p-|p-|  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
p-|p-|  |  |p-|p-|p-|p-
--+--+--+--+--+--+--+--
R-|N-|B-|Q-|K-|B-|N-|R-
--+--+--+--+--+--+--+--
```

## Example 2
game2.txt
```
R+|N+|B+|Q+|K+|B+|N+|R+
p+|p+|p+|p+|p+|p+|p+|p+
  |  |  |  |  |  |  |  
  |  |  |  |  |  |  |  
  |  |  |  |  |  |  |  
  |  |  |  |  |  |  |  
p-|p-|p-|p-|p-|p-|p-|p-
R-|N-|B-|Q-|K-|B-|N-|R-
g1-f3
d7-d6
f3-g5
e7-e5
g5-f7
```

Output (only the last move is shown):
```
Move: g5-f7
--+--+--+--+--+--+--+--
R+|N+|B+|Q+|  |  |  |R+
--+--+--+--+--+--+--+--
p+|p+|p+|  |  |  |p+|p+
--+--+--+--+--+--+--+--
  |  |  |p+|  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |  |p+|  |  |  
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
  |  |  |  |  |  |  |  
--+--+--+--+--+--+--+--
p-|p-|p-|p-|p-|p-|p-|p-
--+--+--+--+--+--+--+--
R-|N-|B-|Q-|K-|B-|  |R-
--+--+--+--+--+--+--+--
White wins!
```
