# PYRAMIDS

During a trip to Val Vermenagna, Prof Otto Lidenbrock discovered a surprising complex of buildings
pyramids made up of cubes of one meter on each side. Each structure has the highest point in the center, surrounded by a second
lower than one meter and wider than one meter in each direction, followed by countless successive levels that
they degrade either to the ground, or to meet the side of another pyramid, or to the rocky walls that
delimit the area. Given the high regularity of the area, Prof. Lindenbrock divided the area into a grid of squares
one meter wide. After that, considering the ground at height 0, he wrote down a representative table in a file
all heights (whole numbers). Note that a peak must have a height greater than 0 and can be recognized
by the absence of adjacent higher points. Also note that each bud has no directly adjacent peaks, not even in
diagonal.

It is required to write a program capable of acquiring the file written by the Professor, whose name is `map.txt`. The
program will have to print the list of tops on the screen, following the following format. Number the rows and columns
starting from 0. It is assumed that the contents of the file are correct and conform to the description. If there are no tops,
report it.

    height column row  
    height column row  

At the end, print the average height of the tops.

# Example

## map.txt

    3 4 4 4 3 2 1 0 0 0
    3 4 5 4 3 2 1 1 1 1
    3 4 4 4 3 2 2 2 2 1
    3 3 3 3 3 3 3 3 2 1
    2 2 2 2 2 3 4 3 2 1
    1 1 1 1 2 3 3 3 2 1
    0 0 0 1 2 2 2 2 2 1
    0 0 0 1 1 1 1 1 1 1
    0 1 0 0 0 0 0 0 0 0
    0 0 0 0 0 0 1 0 0 0

## Output

    5 1 2
    4 4 6
    1 8 1
    1 9 6

    Average height: 2.75 m 
