# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

from pprint import pprint

DATA_FILE = '20251209 atomic-chess_board_2.txt'


def read_game(filename):
    try:
        with open(filename) as file:
            raw_lines = file.readlines()
    except OSError:
        print("Yeuch!")
        exit(1)

    board = list()
    for line in raw_lines[:8]:
        board.append(line.rstrip().split('|'))
    pprint(board)

    moves = list()
    for line in raw_lines[8:]:
        from_, to_ = line.rstrip().split('-')
        moves.append((human2computer(from_), human2computer(to_)))
    pprint(moves)

    return board, moves


def human2computer(txt):
    r"""Translate from d2 to (6, 3)"""
    col = ord(txt[0]) - ord('a')
    row = 8 - int(txt[1])
    return row, col


def move(board, ply):
    from_row, from_col = ply[0]
    to_row, to_col = ply[1]
    board[to_row][to_col] = board[from_row][from_col]
    board[from_row][from_col] = '  '


def is_valid(coord):
    if coord < 0 or coord >= 8:
        return False
    else:
        return True


def blast(board, ply):
    move(board, ply)
    for to_row in range(ply[1][0] - 1, ply[1][0] + 1 + 1):
        for to_col in range(ply[1][1] - 1, ply[1][1] + 1 + 1):
            if is_valid(to_row) and is_valid(to_col) and board[to_row][to_col][0] != 'p':
                board[to_row][to_col] = '  '


def main():
    board, moves = read_game(DATA_FILE)
    current_player = '-'
    for ply in moves:
        from_row, from_col = ply[0]
        to_row, to_col = ply[1]

        if board[from_row][from_col][1] != current_player:
            continue
        if board[to_row][to_col] == '  ':
            move(board, ply)
        elif board[to_row][to_col][1] != current_player:
            blast(board, ply)
        else:
            # ignore the illegal move
            continue

        pprint(board)
        # mature progrmmrs only
        current_player = '+' if current_player == '-' else '-'


if __name__ == '__main__':
    main()
