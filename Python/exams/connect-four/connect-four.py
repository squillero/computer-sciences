# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE.md' for details.

# Cool replacement of print()'s for debugging
from icecream import ic

MOVES_FILENAME = 'moves.txt'

EMPTY = '-'
NUM_COLUMNS = 7
NUM_ROWS = 6


def read_moves(filename):
    """Reads the moves list and returns a list of tuples (player, column)"""
    moves = list()
    try:
        with open(filename) as moves_list:
            for move in moves_list:
                (player, column) = move.split()
                moves.append((player, int(column)))
    except OSError as problem:
        exit(problem)
    return moves


def print_board(board):
    """Pretty print the board"""
    for r in range(NUM_ROWS):
        for c in range(NUM_COLUMNS):
            print(f"{board[r][c]:^3}", end='')
        print()


def find_bottom(board, column):
    """Return the lowest available row in a give column"""
    bottom = NUM_ROWS - 1
    while board[bottom][column] != EMPTY:
        bottom -= 1
    return bottom


def check_win(board):
    """Check whethever the game is over and who won. Return None if the game is still on, 'X' or 'O' if someone won."""

    # Check horizontal
    for r in range(NUM_ROWS):
        for c in range(NUM_COLUMNS - 3):
            if (
                board[r][c] != EMPTY
                and board[r][c] == board[r][c + 1] == board[r][c + 2] == board[r][c + 3]
            ):
                return board[r][c]

    for r in range(NUM_ROWS - 3):
        # Check vertical
        for c in range(NUM_COLUMNS):
            if (
                board[r][c] != EMPTY
                and board[r][c] == board[r + 1][c] == board[r + 2][c] == board[r + 3][c]
            ):
                return board[r][c]
        # Check diagonal (top-left to bottom-right)
        for c in range(NUM_COLUMNS - 3):
            if (
                board[r][c] != EMPTY
                and board[r][c] == board[r + 1][c + 1] == board[r + 2][c + 2] == board[r + 3][c + 3]
            ):
                return board[r][c]
        # Check diagonal (top-right to bottom-left)
        for c in range(3, NUM_COLUMNS):
            if (
                board[r][c] != EMPTY
                and board[r][c] == board[r + 1][c - 1] == board[r + 2][c - 2] == board[r + 3][c - 3]
            ):
                return board[r][c]

    return None


def main():
    """Standard entry point"""
    board = list()
    for _ in range(NUM_ROWS):
        board.append([EMPTY] * NUM_COLUMNS)
    print_board(board)

    moves = read_moves(MOVES_FILENAME)
    num_moves = 0
    for player, column in moves:
        num_moves += 1
        symbol = 'O' if num_moves % 2 == 1 else 'X'
        pos = find_bottom(board, column)
        # ic(player, symbol, column, pos)
        board[pos][column] = symbol
        print(f"Player {player} Plays in column {column}")
        print_board(board)
        print()
        if check_win(board) is not None:
            print(f"Player {player} wins in {num_moves} moves!")
            break


if __name__ == '__main__':
    """This is executed when run from the command line"""
    main()
