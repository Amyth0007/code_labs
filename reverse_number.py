# Name: Amit Manore # Enr_no: BE20F06F036
# Prac1

num = int(input("Enter a number which you want a reverse of: "))
reverseNum = 0
while num != 0:
    unitDigit = num % 10
    reverseNum = reverseNum * 10 + unitDigit
    num = num // 10
print("Reversed number: ",reverseNum)