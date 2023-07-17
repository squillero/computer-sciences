# BATTLESHIP

Implement a basic version of the battleship game: The position of each player's ships is saved in a matrix of size 10x10 as in the files below, where the character `#` (hash) indicates the presence of a ship part, while the character `-` (minus) indicates the sea.

    -#------#-
    -#-----##-
    -#-----##-
    --------#-
    --####----
    ----------
    -#--#-----
    -#------#-
    -#---##---
    -#--------

The program asks the names of the files containing the ship positions. It then reads the players' moves from the file moves.txt. Each row of the file contains the coordinates of a shot in the format `R,C` where `R` (row index) is a letter between A and J, and `C` (column index) is a number between 1 and 10. The shots are related to alternating players: first row player 1, second row player 2, third row player 1, etc.

    A,1
    F,5
    A,4
    C,1
    A,5
    C,3
    A,6
    B,3

After each shot the program should print on the screen:

    the player who is taking the shot
    the coordinates of the shot
    the result of the shot: either miss or hit

The game ends when all ships of either player are sunk, or when all shots in the file moves.txt has been played
At the end of the game, the program should print on screen the map of the shots fired by each players: misses are indicated by o (lowercase o) and hits by * (asterisk); boats are not shown.

    -*------*-
    ---o---**-
    -*-----oo-
    --------*-
    --**-*----
    ----o-----
    -*-o---o--
    -*--o---*-
    ------*---
    -*--------
