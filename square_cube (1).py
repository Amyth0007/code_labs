def square(inputNum):
    return inputNum ** 2


def cube(inputNum):
    return inputNum ** 3


def squareAndCube(inputNum):
    print("Square: ", square(inputNum))
    print("Cube: ", cube(inputNum))


userInput = int(input("Enter a number: "))

squareAndCube(userInput)
