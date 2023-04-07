# Copyright © 2022 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

from pprint import pprint

MAZE_FILENAME = '20221125_maze.dat'
CORRIDOR = '#'
WALL = '.'


def print_maze(maze):
    for line in maze:
        print(''.join(line))
    print()


def read_maze(filename):
    maze = list()
    try:
        with open(filename) as file_in:
            for line in file_in:
                maze.append(list(line.strip()))
        #ammar's alternative
        #with open(filename) as file_in:
        #    maze = file_in.read().split('\n')[:-1]
    except OSError as problem_description:
        print(f"Yeuch, we have a problem: {problem_description}")
        exit(1)

    return maze


def find_start(maze):
    for i, line in enumerate(maze):
        if line[0] == CORRIDOR:
            return i
    else:
        return None


def fill(maze, start):
    num_columns = len(maze[0])
    num_rows = len(maze)
    water = list()
    water.append(start)
    found_exit = False
    while water:
        row, col = water.pop(0)
        if col == num_columns - 1:
            found_exit = True
        maze[row][col] = '+'
        print_maze(maze)
        if col < num_columns - 1 and maze[row][col + 1] == CORRIDOR:
            water.append((row, col + 1))
        if col > 0 and maze[row][col - 1] == CORRIDOR:
            water.append((row, col - 1))
        if row > 0 and maze[row - 1][col] == CORRIDOR:
            water.append((row - 1, col))
        if row < num_rows - 1 and maze[row + 1][col] == CORRIDOR:
            water.append((row + 1, col))
    return found_exit


def main():
    maze = read_maze(MAZE_FILENAME)
    dim_x = len(maze[0])
    dim_y = len(maze)
    print(f"Maze: {dim_y} x {dim_x}")
    res = fill(maze, (find_start(maze), 0))
    if res:
        print("There is a way out!")


if __name__ == '__main__':
    main()
