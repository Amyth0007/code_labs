# Name: Amit Manore # Enr_no: BE20F06F036
# prac2

import math


def calc_distance(x1, y1, x2, y2):
    return math.sqrt(((x2 - x1) ** 2) + ((y2 - y1) ** 2))


X1 = int(input("x1: "))
X2 = int(input("x2: "))
Y1 = int(input("y1: "))
Y2 = int(input("y2: "))

print("Distance is: ",calc_distance(X1, Y1, X2, Y2))
