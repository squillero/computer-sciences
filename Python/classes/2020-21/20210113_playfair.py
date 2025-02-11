# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

import sys

VALID_LETTERS = "ABCDEFGHIKLMNOPQRSTUVWXYZ"


def init_playfair(word):
    key = ''
    for letter in word.upper() + VALID_LETTERS:
        if letter in VALID_LETTERS and letter not in key:
            key += letter
    cipher = list()
    for n in range(5):
        cipher.append(list(key[5 * n:5 * n + 5]))
    return cipher


def position(letter, cipher):
    pos_r, pos_c = -1, -1
    for r, line in enumerate(cipher):
        if letter in line:
            pos_r = r
            pos_c = line.index(letter)
    return pos_r, pos_c


def encode2(p1, p2, cipher):
    r1, c1 = position(p1, cipher)
    r2, c2 = position(p2, cipher)
    e1 = cipher[r1][c2]
    e2 = cipher[r2][c1]
    print(f"{p1}{p2} -> {e1}{e2}")
    return e1, e2


def encode(text, cipher):
    code = ''
    while text:
        c1, c2 = encode2(text[0], text[1], cipher)
        code = code + c1 + c2
        text = text[2:]
    return code


def cook(raw_text):
    cooked_text = ''
    for letter in raw_text.upper():
        if letter in VALID_LETTERS:
            cooked_text += letter
        elif letter == 'J':
            cooked_text += 'I'
    if len(cooked_text) % 2 == 1:
        cooked_text += 'X'
    return cooked_text


def main():
    cipher = init_playfair("playfair!")
    user_input = input()
    plain = cook(user_input)
    enc = encode(plain, cipher)
    dec = encode(enc, cipher)
    print(plain)
    print(enc)
    print(dec)


if __name__ == '__main__':
    main()
