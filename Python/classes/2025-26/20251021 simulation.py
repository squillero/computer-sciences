# Copyright © 2025 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


# my first function ;-)_
def friction(v):
    f = v * 0.1
    return f


ax = 0
ay = -9.8
vx = 100
vy = 100
px = 0
py = 0

print(f"Current position: x={px:.2f}; y={py:.2f}")
px += vx
py += vy
while py > 0:
    print(f"Current position: x={px:.2f}; y={py:.2f}")
    vx += ax - friction(vx)
    vy += ay - friction(vy)
    px += vx
    py += vy
