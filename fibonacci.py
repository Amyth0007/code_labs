# Name: Amit Manore # Enr_no: BE20F06F036
# Prac1


num = int(input("Enter the nth term of fibonacci series:"))
n1 = 0
n2 = 1
while num > 0:
    print(n1)
    n3 = n1 + n2
    n1 = n2
    n2 = n3
    num = num - 1
