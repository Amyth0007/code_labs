# Name: Amit Manore # Enr_no: BE20F06F036
# prac7

str1 = input("enter 1st string: ")
str2 = input("enter 2nd string: ")

commonListOfSet = list(set(str1) & set(str2))
print("common letters of both strings are: ")

for i in commonListOfSet:
    print(i)
