# Name: Amit Manore # Enr_no: BE20F06F036


import math


def fact(n):
    return math.factorial(n)


num = int(input("Enter the number:"))
f = fact(num)
print("Factorial of", num, "is", f)
