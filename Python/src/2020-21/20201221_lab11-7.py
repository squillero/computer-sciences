#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

MAZE_NAME = 'maze.dat'


def main():
    """Entry point"""

    maze = list()
    try:
        with open(MAZE_NAME, 'r') as maze_description:
            for line in maze_description:
                maze.append(list(line[:-1]))
    except OSError as problem:
        print(f"Yeuch, we have a problem: {problem}")

    maze_dictionary = dict()
    for r in range(len(maze)):
        for c in range(len(maze[r])):
            if maze[r][c] == ' ':
                maze_dictionary[(r, c)] = set()
                if r > 0 and maze[r - 1][c] == ' ':
                    maze_dictionary[(r, c)].add((r - 1, c))
                if r < len(maze) - 1 and maze[r + 1][c] == ' ':
                    maze_dictionary[(r, c)].add((r + 1, c))
                if c > 0 and maze[r][c - 1] == ' ':
                    maze_dictionary[(r, c)].add((r, c - 1))
                if c < len(maze[r]) - 1 and maze[r][c + 1] == ' ':
                    maze_dictionary[(r, c)].add((r, c + 1))
    print(maze_dictionary)


if __name__ == '__main__':
    main()
