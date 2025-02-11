# https://github.com/squillero/computer-sciences
# Solution proposed by Reda Fakih 308192
# Free under certain conditions — see the license for details.


def PrintParking(parkingSlots : list):
    temp = ""
    for space in parkingSlots:
        if space:
            temp += 'x'
        else:
            temp += '_'
    
    print(temp)

def ParkCars(spaces : list, l : int, r : int):
    if l > r:
        return

    median = (l + r) // 2
    spaces[median] = 1

    PrintParking(spaces)

    ParkCars(spaces, l, median - 1)
    ParkCars(spaces, median + 1, r)


def GetInput() -> int:
    number = input("Enter number of available free slots to park in: ")
    while number:
        if not number.isdigit():
            number = input("Please enter a valid number: ")
        else:
            number = int(number)
            break
    
    return number

def main():
    numberOfSpaces = GetInput()
    spaces = [0 for _ in range(int(numberOfSpaces))] # 0 represents an empty space
    ParkCars(spaces, 0, len(spaces) - 1)

    PrintParking(spaces)

if __name__ == '__main__':
    main()
