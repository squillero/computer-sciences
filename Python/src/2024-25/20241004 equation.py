# solve equation ax**2 + bx + c = 0

a = int(input('a: '))
b = int(input('b: '))
c = int(input('c: '))

if a == 0:
    # b x + c = 0
    if b == 0:
        if c == 0:
            print("Undefined")
        else:
            print("D'ho!?")
    else:
        x = -c / b
        print("x =", x)
else:
    delta = b**2 - 4 * a * c

    if delta < 0:
        print("No real solutions")
    else:
        x1 = (-b + delta ** (1 / 2)) / (2 * a)
        x2 = (-b - delta ** (1 / 2)) / (2 * a)
        print("x1 =", x1)
        print("x2 =", x2)
