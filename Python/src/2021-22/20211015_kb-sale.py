# Copyright © 2021 Giovanni Squillero <giovanni.squillero@polito.it>
# Free for personal or classroom use; see 'LICENSE.md' for details.
# https://github.com/squillero/computer-sciences

# kilobyte day sale
# KiB kB KB

original_price = float(input("Original price: "))

if original_price >= 128:
    discount = 16 / 100
else:
    discount = 8 / 100
final_price = original_price - original_price * discount
print(f"Item price: {final_price:g}")

# alt solutions
discount = 8 / 100
if original_price >= 128:
    discount *= 2  # shortcut for discount = discount * 2
print(f"Item price: {original_price*(1-discount):g}")
