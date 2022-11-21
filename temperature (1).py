n = int(input("enter no of list elements: "))
celsius = []
for i in range(0, n):
    value = int(input())
    celsius.append(value)
print("converted values from Celsius to Fahrenheit: ")
fahrenheit = [((float(9) / 5) * i + 32) for i in celsius]
print(fahrenheit)
