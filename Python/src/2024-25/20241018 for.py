# Copyright © 2024 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

# Falu Red - A deep red, often associated with traditional Swedish houses.
# Wenge - A dark, rich brown named after the wood from the Wenge tree.
# Zaffre - A bright blue pigment made from cobalt.
# Gamboge - A golden yellow derived from the resin of certain trees.
# Vermilion - A vibrant red-orange pigment.
# Dandelion - A bright yellow, reminiscent of the flower.
# Screaming Green - A bright, neon green.
# Kraft Paper Brown - A warm, earthy brown similar to that of kraft paper.
# Cerulean - A bright blue that resembles a clear sky.
# Periwinkle - A soft blue with hints of lavender.

from icecream import ic

colors = [
    "Falu Red",
    "Wenge",
    "Zaffre",
    "Gamboge",
    "Vermilion",
    "Dandelion",
    "Screaming Green",
    "Kraft Paper Brown",
    "Cerulean",
    "Periwinkle",
]

for color in colors:
    print(f"\"{color}\"")

print("It's all over...")
ic(color)
del color
ic(color)
