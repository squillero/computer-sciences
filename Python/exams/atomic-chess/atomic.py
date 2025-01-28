# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free for personal or classroom use; see 'LICENSE' for details.

from copy import copy

EMPTY = '  '
INPUT_FILE = 'game2.txt'


def parse_input(filename):
    r"""Parse the data file as a board + list of moves"""
    board = list()
    moves = list()
    try:
        with open(filename) as file:
            for r in range(8):
                board.append(file.readline().rstrip().split('|'))
            board.reverse()
            for line in file:
                moves.append(tuple(line.rstrip().split('-')))
    except OSError as problem:
        exit(problem)
    return board, moves


def print_board(board):
    r"""Display the board with a1 as bottom left square"""
    print('+'.join(['--'] * 8))
    for row in reversed(board):
        print('|'.join(row))
        print('+'.join(['--'] * 8))


def move_piece(board, from_square, to_square):
    r"""Move piece, consider explosions."""
    rs, cs = square_to_indexes(from_square)
    rl, cl = square_to_indexes(to_square)
    if get_player(board, to_square) == 0:
        board[rl][cl] = board[rs][cs]
    else:
        board[rl][cl] = EMPTY  # in case we taake a pawn ;-)
        for r in range(max(0, rl - 1), min(8, rl + 2)):
            for c in range(max(0, cl - 1), min(8, cl + 2)):
                if 'p' not in board[r][c]:
                    board[r][c] = EMPTY
        print("Boooom!")
    board[rs][cs] = EMPTY


def square_to_indexes(square):
    r"""Conver string to coordinates."""
    return int(square[1]) - 1, "abcdefgh".index(square[0])


def get_player(board, square):
    """Who is the player in a given square? +1 black, -1 white, 0 empty."""
    r, c = square_to_indexes(square)
    if '+' in board[r][c]:
        return +1
    elif '-' in board[r][c]:
        return -1
    else:
        return 0


def winning_position(board):
    r"""Checks if game is over"""
    black_king, white_king = False, False
    for r in range(8):
        if 'K+' in board[r]:
            black_king = True
        if 'K-' in board[r]:
            white_king = True

    if black_king and not white_king:
        return +1
    elif white_king and not black_king:
        return -1
    else:
        return 0


def main():
    board, moves = parse_input(INPUT_FILE)
    print_board(board)

    player = -1
    for start, land in moves:
        if get_player(board, start) != player or get_player(board, land) == player:
            continue
        print()
        print(f"Move: {start}-{land}")
        move_piece(board, start, land)
        print_board(board)
        if winning_position(board) != 0:
            break
        player = -player

    if winning_position(board) == +1:
        print("White wins!")
    elif winning_position(board) == -1:
        print("Black wins!")


if __name__ == '__main__':
    main()
