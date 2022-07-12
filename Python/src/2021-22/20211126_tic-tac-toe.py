# Copyright © 2021 Giovanni Squillero <squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

from pprint import pprint

SYMBOL = ['X', 'O']


def print_board(board):
    """Pretty prints the board"""
    for r in range(3):
        print('|', end='')
        for c in range(3):
            print(f"{board[r][c]}|", end='')
        print()


def won(board, player):
    """Checks if `player` won (terrible!)"""
    for i in range(3):
        if board[i][0] == player and board[i][1] == player and board[i][2] == player:
            return True
        if board[0][i] == player and board[1][i] == player and board[2][i] == player:
            return True
    if board[0][0] == player and board[1][1] == player and board[2][2] == player:
        return True
    if board[0][2] == player and board[1][1] == player and board[2][0] == player:
        return True
    return False


def main():
    """Entry point"""
    board = [[' '] * 3 for _ in range(3)]
    print_board(board)
    player = 0
    game_over = False
    while not game_over:
        move = int(input())
        move_r = (move - 1) // 3
        move_c = (move - 1) % 3
        board[move_r][move_c] = SYMBOL[player]
        if won(board, SYMBOL[player]):
            print(f"Player {SYMBOL[player]} won!")
            game_over = True
        player = 1 - player
        print_board(board)


main()
