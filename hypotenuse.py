# Name: Amit Manore # Enr_no: BE20F06F036
# prac6

import math


def find_hypotenuse(a, b):
    return math.sqrt((a ** 2) + (b ** 2))


x = int(input("enter length of 1st side of triangle: "))
y = int(input("enter length of 2nd side of triangle: "))

hypotenuse = find_hypotenuse(x, y)
print("The hypotenuse of the triangle is:  ", hypotenuse)
